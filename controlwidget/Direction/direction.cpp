#include "direction.h"
#include "ui_direction.h"

Direction::Direction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Direction)
{
    ui->setupUi(this);
}

Direction::~Direction()
{
    delete ui;
}
