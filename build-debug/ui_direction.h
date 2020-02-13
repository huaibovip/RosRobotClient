/********************************************************************************
** Form generated from reading UI file 'direction.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIRECTION_H
#define UI_DIRECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Direction
{
public:
    QLabel *label;

    void setupUi(QWidget *Direction)
    {
        if (Direction->objectName().isEmpty())
            Direction->setObjectName(QString::fromUtf8("Direction"));
        Direction->resize(400, 300);
        label = new QLabel(Direction);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 100, 67, 17));

        retranslateUi(Direction);

        QMetaObject::connectSlotsByName(Direction);
    } // setupUi

    void retranslateUi(QWidget *Direction)
    {
        Direction->setWindowTitle(QApplication::translate("Direction", "Form", nullptr));
        label->setText(QApplication::translate("Direction", "Direction", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Direction: public Ui_Direction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIRECTION_H
