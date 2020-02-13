#include "blockly.h"
#include "ui_blockly.h"

Blockly::Blockly(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Blockly)
{
    ui->setupUi(this);
}

Blockly::~Blockly()
{
    delete ui;
}
