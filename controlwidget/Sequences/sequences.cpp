#include "sequences.h"
#include "ui_sequences.h"

Sequences::Sequences(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sequences)
{
    ui->setupUi(this);
}

Sequences::~Sequences()
{
    delete ui;
}
