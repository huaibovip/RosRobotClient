#include "controltreewidget.h"
#include "ui_controltreewidget.h"

/******************   构造函数     *********************/
ControlTreeWidget::ControlTreeWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ControlTreeWidget)
{
    ui->setupUi(this);
    this->initValue();
}

/******************   析构函数     *********************/
ControlTreeWidget::~ControlTreeWidget()
{
    delete ui;
}

/******************   初始化数据     *********************/
void ControlTreeWidget::initValue()
{
    ui->treeWidgetMenu->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->treeWidgetMenu->setSelectionMode(QAbstractItemView::SingleSelection);

    ui->treeWidgetMenu->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->treeWidgetMenu->setHeaderHidden(true);
    ui->treeWidgetMenu->header()->setStretchLastSection(true);
    ui->treeWidgetMenu->topLevelItem(0)->setSelected(true);
    ui->treeWidgetMenu->setFocusPolicy(Qt::NoFocus);
}

/******************   点击树形项显示对应页     *********************/
void ControlTreeWidget::on_treeWidgetMenu_clicked(const QModelIndex &index)
{
    emit sendShowIndex(WidgetType(index.row()));
}
