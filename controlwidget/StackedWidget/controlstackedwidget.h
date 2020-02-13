#ifndef CONTROLSTACKEDWIDGET_H
#define CONTROLSTACKEDWIDGET_H

#include <QWidget>
#include "util/config.hpp"

namespace Ui {
class ControlStackedWidget;
}

class ControlStackedWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ControlStackedWidget(QWidget *parent = nullptr);
    ~ControlStackedWidget();

signals:
    void sendGamePadBtnIndex(int);

private slots:
    void receiveShowCurrentIndex(WidgetType widgetType);
    void receiveGamePadBtnIndex(int index);

private:
    Ui::ControlStackedWidget *ui;
    void initValue();
};

#endif // CONTROLSTACKEDWIDGET_H
