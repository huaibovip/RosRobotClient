#ifndef MAINTITLEBAR_H
#define MAINTITLEBAR_H

#include <QWidget>
#include "controlwidget/titlebar/titlebar.h"

namespace Ui {
class MainTitleBar;
}

class MainTitleBar : public TitleBar
{
    Q_OBJECT

public:
    explicit MainTitleBar(QWidget *parent = nullptr);
    ~MainTitleBar();

signals:
    void sendTitleBtnIndex(int);

private slots:
    void on_pushButtonClose_clicked();
    void on_pushButtonMin_clicked();
    void on_pushButtonNormalMax_clicked();
    void on_sendBtn_clicked();

private:
    Ui::MainTitleBar *ui;
};

#endif // MAINTITLEBAR_H
