#ifndef CONTROLTREEWIDGET_H
#define CONTROLTREEWIDGET_H

#include <QWidget>
#include "util/config.hpp"

namespace Ui {
class ControlTreeWidget;
}

class ControlTreeWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ControlTreeWidget(QWidget *parent = nullptr);
    ~ControlTreeWidget();

signals:
    void sendShowIndex(WidgetType);

private slots:
    void on_treeWidgetMenu_clicked(const QModelIndex &index);

private:
    Ui::ControlTreeWidget *ui;
    void initValue();
};

#endif // CONTROLTREEWIDGET_H
