#include "maintitlebar.h"
#include "ui_maintitlebar.h"

MainTitleBar::MainTitleBar(QWidget *parent) :
    TitleBar(parent),
    ui(new Ui::MainTitleBar)
{
    ui->setupUi(this);

    //
    ui->sendBtn->setStyleSheet("QPushButton{border-image: url(:/image/min_normal.svg);}"
                                           "QPushButton:hover{border-image: url(:/image/min_hover.svg);}");
    //

    ui->pushButtonMin->setStyleSheet("QPushButton{border-image: url(:/image/min_normal.svg);}"
                                           "QPushButton:hover{border-image: url(:/image/min_hover.svg);}");

    ui->pushButtonNormalMax->setStyleSheet("QPushButton{border-image: url(:/image/normal_normal.svg);}"
                                           "QPushButton:hover{border-image: url(:/image/normal_hover.svg);}");

    ui->pushButtonClose->setStyleSheet("QPushButton{border-image: url(:/image/close_normal.svg);}"
                                           "QPushButton:hover{border-image: url(:/image/close_hover.svg);}");
}

MainTitleBar::~MainTitleBar()
{
    delete ui;
}

void MainTitleBar::on_pushButtonClose_clicked()
{
    if(parentWidget)
    {
        parentWidget->close();
    }
}

void MainTitleBar::on_pushButtonMin_clicked()
{
    if(parentWidget)
    {
        parentWidget->showMinimized();
    }
}


void MainTitleBar::on_pushButtonNormalMax_clicked()
{
    if(parentWidget == nullptr) return;
    if (parentWidget->isMaximized())
    {
        parentWidget->showNormal();
        ui->pushButtonNormalMax->setStyleSheet("QPushButton{border-image: url(:/image/normal_normal.svg);}"
                                               "QPushButton:hover{border-image: url(:/image/normal_hover.svg);}");
    }
    else
    {
        parentWidget->showMaximized();
        ui->pushButtonNormalMax->setStyleSheet("QPushButton{border-image: url(:/image/max_normal.svg);}"
                                               "QPushButton:hover{border-image: url(:/image/max_hover.svg);}");
    }
}

void MainTitleBar::on_sendBtn_clicked()
{
    emit sendTitleBtnIndex(0);
}
