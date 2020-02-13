#ifndef SEQUENCES_H
#define SEQUENCES_H

#include <QWidget>

namespace Ui {
class Sequences;
}

class Sequences : public QWidget
{
    Q_OBJECT

public:
    explicit Sequences(QWidget *parent = nullptr);
    ~Sequences();

private:
    Ui::Sequences *ui;
};

#endif // SEQUENCES_H
