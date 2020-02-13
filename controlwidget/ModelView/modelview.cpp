#include "modelview.h"

ModelView::ModelView(QWidget *parent) : QWidget(parent)
{
    this->initValue();
}

void ModelView::initValue()
{
    view = new QWebEngineView(this);
    view->setAutoFillBackground(true);
    view->load(QUrl("qrc:/index.html"));
    view->setContextMenuPolicy(Qt::NoContextMenu);
    view->resize(550, 550);
    view->show();
}

void ModelView::onConnectedToROS(QString IP)
{
    QString param = "connect(viewer, '";
    param.append(IP);
    param.append("')");
    //qDebug() << param;
    view->page()->runJavaScript(param);
}
