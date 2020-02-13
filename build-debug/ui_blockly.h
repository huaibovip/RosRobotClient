/********************************************************************************
** Form generated from reading UI file 'blockly.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOCKLY_H
#define UI_BLOCKLY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Blockly
{
public:
    QLabel *label;

    void setupUi(QWidget *Blockly)
    {
        if (Blockly->objectName().isEmpty())
            Blockly->setObjectName(QString::fromUtf8("Blockly"));
        Blockly->resize(400, 300);
        label = new QLabel(Blockly);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 100, 67, 17));

        retranslateUi(Blockly);

        QMetaObject::connectSlotsByName(Blockly);
    } // setupUi

    void retranslateUi(QWidget *Blockly)
    {
        Blockly->setWindowTitle(QApplication::translate("Blockly", "Form", nullptr));
        label->setText(QApplication::translate("Blockly", "Blockly", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Blockly: public Ui_Blockly {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOCKLY_H
