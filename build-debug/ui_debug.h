/********************************************************************************
** Form generated from reading UI file 'debug.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUG_H
#define UI_DEBUG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Debug
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QScrollArea *scrollArea;
    QWidget *Contents;
    QScrollArea *scrollArea_3;
    QWidget *Contents_3;
    QScrollArea *scrollArea_2;
    QWidget *Contents_2;

    void setupUi(QWidget *Debug)
    {
        if (Debug->objectName().isEmpty())
            Debug->setObjectName(QString::fromUtf8("Debug"));
        Debug->resize(800, 600);
        gridLayout = new QGridLayout(Debug);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(36);
        gridLayout->setVerticalSpacing(18);
        gridLayout->setContentsMargins(18, 18, 36, 18);
        verticalSpacer = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        scrollArea = new QScrollArea(Debug);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMaximumSize(QSize(16777215, 500));
        scrollArea->setWidgetResizable(true);
        Contents = new QWidget();
        Contents->setObjectName(QString::fromUtf8("Contents"));
        Contents->setGeometry(QRect(0, 0, 531, 187));
        scrollArea->setWidget(Contents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        scrollArea_3 = new QScrollArea(Debug);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setMaximumSize(QSize(16777215, 150));
        scrollArea_3->setWidgetResizable(true);
        Contents_3 = new QWidget();
        Contents_3->setObjectName(QString::fromUtf8("Contents_3"));
        Contents_3->setGeometry(QRect(0, 0, 175, 148));
        scrollArea_3->setWidget(Contents_3);

        gridLayout->addWidget(scrollArea_3, 0, 1, 1, 1);

        scrollArea_2 = new QScrollArea(Debug);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setMaximumSize(QSize(16777215, 500));
        scrollArea_2->setWidgetResizable(true);
        Contents_2 = new QWidget();
        Contents_2->setObjectName(QString::fromUtf8("Contents_2"));
        Contents_2->setGeometry(QRect(0, 0, 531, 187));
        scrollArea_2->setWidget(Contents_2);

        gridLayout->addWidget(scrollArea_2, 1, 0, 1, 1);

        gridLayout->setColumnStretch(0, 3);
        gridLayout->setColumnStretch(1, 1);

        retranslateUi(Debug);

        QMetaObject::connectSlotsByName(Debug);
    } // setupUi

    void retranslateUi(QWidget *Debug)
    {
        Debug->setWindowTitle(QApplication::translate("Debug", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Debug: public Ui_Debug {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUG_H
