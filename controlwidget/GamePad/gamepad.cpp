#include "gamepad.h"
#include "ui_gamepad.h"
#include <QIntValidator>

GamePad::GamePad(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GamePad)
{
    ui->setupUi(this);
    this->initValue();
}

GamePad::~GamePad()
{
    delete ui;
}

void GamePad::initValue()
{
    ui->ArmTabWidget->setCurrentIndex(0);

    {
        ui->jointEdit_1->setValidator(new QIntValidator(-128, 127, this));
        ui->jointEdit_2->setValidator(new QIntValidator(-128, 127, this));
        ui->jointEdit_3->setValidator(new QIntValidator(-128, 127, this));
        ui->jointEdit_4->setValidator(new QIntValidator(-128, 127, this));
        ui->jointEdit_5->setValidator(new QIntValidator(-128, 127, this));
        ui->jointEdit_6->setValidator(new QIntValidator(-128, 127, this));
    }
}

void GamePad::on_moveButton_clicked()
{
    emit sendGamePadBtnIndex(0);
}

void GamePad::on_stopButton_clicked()
{
    emit sendGamePadBtnIndex(1);
}

void GamePad::on_setButton_clicked()
{
    emit sendGamePadBtnIndex(2);
}
