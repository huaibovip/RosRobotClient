/********************************************************************************
** Form generated from reading UI file 'sequences.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEQUENCES_H
#define UI_SEQUENCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sequences
{
public:
    QLabel *label;

    void setupUi(QWidget *Sequences)
    {
        if (Sequences->objectName().isEmpty())
            Sequences->setObjectName(QString::fromUtf8("Sequences"));
        Sequences->resize(400, 300);
        label = new QLabel(Sequences);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 100, 67, 17));

        retranslateUi(Sequences);

        QMetaObject::connectSlotsByName(Sequences);
    } // setupUi

    void retranslateUi(QWidget *Sequences)
    {
        Sequences->setWindowTitle(QApplication::translate("Sequences", "Form", nullptr));
        label->setText(QApplication::translate("Sequences", "Sequences", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sequences: public Ui_Sequences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEQUENCES_H
