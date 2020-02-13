#ifndef DEBUG_H
#define DEBUG_H

#include <QWidget>

namespace Ui {
class Debug;
}

class Debug : public QWidget
{
    Q_OBJECT

public:
    explicit Debug(QWidget *parent = nullptr);
    ~Debug();

private:
    Ui::Debug *ui;
};

#endif // DEBUG_H
