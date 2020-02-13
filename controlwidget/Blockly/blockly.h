#ifndef BLOCKLY_H
#define BLOCKLY_H

#include <QWidget>

namespace Ui {
class Blockly;
}

class Blockly : public QWidget
{
    Q_OBJECT

public:
    explicit Blockly(QWidget *parent = nullptr);
    ~Blockly();

private:
    Ui::Blockly *ui;
};

#endif // BLOCKLY_H
