#include "controlstackedwidget.h"
#include "ui_controlstackedwidget.h"


ControlStackedWidget::ControlStackedWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ControlStackedWidget)
{
    ui->setupUi(this);
    this->initValue();
}

ControlStackedWidget::~ControlStackedWidget()
{
    delete ui;
}

/******************   点击树形项显示对应Tab页     *********************/
void ControlStackedWidget::receiveShowCurrentIndex(WidgetType widgetType)
{
    if(widgetType < WIDGET_GAMEPAD || widgetType > WIDGET_DEBUG) return;
    ui->stackedWidgetControl->setCurrentIndex(widgetType);
}

void ControlStackedWidget::receiveGamePadBtnIndex(int index)
{
    emit sendGamePadBtnIndex(index);
}

void ControlStackedWidget::initValue()
{
    ui->stackedWidgetControl->setCurrentIndex(WIDGET_GAMEPAD);

    connect(ui->pageGamePad, &GamePad::sendGamePadBtnIndex, this, &ControlStackedWidget::receiveGamePadBtnIndex);
}
