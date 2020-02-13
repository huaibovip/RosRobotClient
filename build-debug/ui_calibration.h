/********************************************************************************
** Form generated from reading UI file 'calibration.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATION_H
#define UI_CALIBRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calibration
{
public:
    QLabel *label;

    void setupUi(QWidget *Calibration)
    {
        if (Calibration->objectName().isEmpty())
            Calibration->setObjectName(QString::fromUtf8("Calibration"));
        Calibration->resize(400, 300);
        label = new QLabel(Calibration);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 100, 81, 17));

        retranslateUi(Calibration);

        QMetaObject::connectSlotsByName(Calibration);
    } // setupUi

    void retranslateUi(QWidget *Calibration)
    {
        Calibration->setWindowTitle(QApplication::translate("Calibration", "Form", nullptr));
        label->setText(QApplication::translate("Calibration", "Calibration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calibration: public Ui_Calibration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATION_H
