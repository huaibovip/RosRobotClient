#ifndef DIRECTION_H
#define DIRECTION_H

#include <QWidget>

namespace Ui {
class Direction;
}

class Direction : public QWidget
{
    Q_OBJECT

public:
    explicit Direction(QWidget *parent = nullptr);
    ~Direction();

private:
    Ui::Direction *ui;
};

#endif // DIRECTION_H
