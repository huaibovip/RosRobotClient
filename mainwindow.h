#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define RAPIDJSON_HAS_STDSTRING 1

#include <QMainWindow>
#include "util/systemtray/systemtray.h"

#include <iostream>
#include <rapidjson/document.h>
#include <rapidjson/writer.h>
#include <types.h>
#include <ros_bridge.h>
#include <ros_topic.h>
#include <ros_service.h>
#include <client/socket_tcp_connection.h>

using namespace rosbridge2cpp;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    SystemTray *syetemTray;

    ROSBridge *ros_;
    SocketTCPConnection *webSocket_;
    ROSTopic *test_topic_;
    ROSTopic *sub_topic_;

    bool isConnected_;
    QString address_;

private:
    void initValue();
    void connectROS();

signals:
    void sendConnectedToROS(QString);

private slots:
    void onReceiveTitleBtnIndex(int index);
    void onReceiveGamePadBtnIndex(int index);
    void onConnectedInitRos();
};

#endif // MAINWINDOW_H
