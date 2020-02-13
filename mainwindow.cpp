#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <thread>
#include <chrono>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , isConnected_(false)
{
    ui->setupUi(this);
    this->initValue();
}

MainWindow::~MainWindow()
{
    delete test_topic_;
    delete sub_topic_;

    delete ros_;
    delete webSocket_;

    delete ui;
}

void MainWindow::initValue()
{
    syetemTray = new SystemTray(this);
    connect(syetemTray->getShowWidget(), SIGNAL(triggered(bool)), this, SLOT(showNormal()));
    connect(syetemTray->getMinWidget(), SIGNAL(triggered(bool)), this, SLOT(showMinimized()));
    ui->widgetTitle->setParentWidget(this);
    this->setWindowFlags(Qt::FramelessWindowHint);

    connect(ui->treeWidgetMenu, SIGNAL(sendShowIndex(WidgetType)), ui->stackedWidget, SLOT(receiveShowCurrentIndex(WidgetType)));
    connect(ui->widgetTitle, SIGNAL(sendTitleBtnIndex(int)), this, SLOT(onReceiveTitleBtnIndex(int)));
    connect(ui->stackedWidget, SIGNAL(sendGamePadBtnIndex(int)), this, SLOT(onReceiveGamePadBtnIndex(int)));
    connect(this, SIGNAL(sendConnectedToROS(QString)), ui->webView, SLOT(onConnectedToROS(QString)));

    webSocket_ = new SocketTCPConnection();
    webSocket_->RegisterErrorCallback([](QAbstractSocket::SocketError err) {
        if(err == QAbstractSocket::SocketError::HostNotFoundError)
            std::cout << "Host not found - You should correct the IP" << std::endl;
        if(err == QAbstractSocket::SocketError::SocketAccessError )
            std::cout << "Error on ROSBridge Socket - You should reinit ROSBridge" << std::endl;
    });
    ros_ = new ROSBridge(*webSocket_);

    connect(webSocket_, SIGNAL(newConnected()), this, SLOT(onConnectedInitRos()));
}

/// slot functions
void MainWindow::onReceiveTitleBtnIndex(int index)
{
    if(index == 0) {
        connectROS();
    }
}

void MainWindow::onReceiveGamePadBtnIndex(int index)
{
    if(index == 0) {
    }else if(index == 1) {
        rapidjson::Document cmd;
        cmd.SetObject();
        cmd.AddMember("data","Hello ROS!", cmd.GetAllocator());
        test_topic_->Publish(cmd);
    }
}


void MainWindow::connectROS()
{
    address_ = "ws://192.168.1.102:9090";
    if(not isConnected_) {
        if(ros_->Init(QUrl(address_)))
        {
            isConnected_ = not isConnected_;
        }else{
            std::cerr << "Failed to connect to ROSBridge" << std::endl;
        }
    }

    emit sendConnectedToROS(address_);

    test_topic_ = new ROSTopic(*ros_, "/test", "std_msgs/String");
    sub_topic_ = new ROSTopic(*ros_, "/client_count", "std_msgs/Int32");
}

void MainWindow::onConnectedInitRos()
{
    rapidjson::Document cmd;
    cmd.SetObject();
    cmd.AddMember("data","Hello ROS!", cmd.GetAllocator());
    test_topic_->Publish(cmd);

    sub_topic_->Subscribe([](ROSBridgePublishMsg& /*msg*/) -> void {
        //        rapidjson::Document d;
        //        std::cout << Helper::get_string_from_rapidjson(msg.ToJSON(d.GetAllocator())) << std::endl;
    });
}
