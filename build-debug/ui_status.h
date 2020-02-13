/********************************************************************************
** Form generated from reading UI file 'status.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATUS_H
#define UI_STATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Status
{
public:
    QLabel *label;

    void setupUi(QWidget *Status)
    {
        if (Status->objectName().isEmpty())
            Status->setObjectName(QString::fromUtf8("Status"));
        Status->resize(400, 300);
        label = new QLabel(Status);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 100, 67, 17));

        retranslateUi(Status);

        QMetaObject::connectSlotsByName(Status);
    } // setupUi

    void retranslateUi(QWidget *Status)
    {
        Status->setWindowTitle(QApplication::translate("Status", "Form", nullptr));
        label->setText(QApplication::translate("Status", "Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Status: public Ui_Status {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATUS_H
