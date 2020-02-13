#ifndef GAMEPAD_H
#define GAMEPAD_H

#include <QWidget>

namespace Ui {
class GamePad;
}

class GamePad : public QWidget
{
    Q_OBJECT

public:
    explicit GamePad(QWidget *parent = nullptr);
    ~GamePad();

signals:
    void sendGamePadBtnIndex(int);

private slots:
    void on_moveButton_clicked();

    void on_stopButton_clicked();

    void on_setButton_clicked();

private:
    Ui::GamePad *ui;
    void initValue();
};

#endif // GAMEPAD_H
