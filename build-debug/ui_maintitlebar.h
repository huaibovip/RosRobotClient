/********************************************************************************
** Form generated from reading UI file 'maintitlebar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTITLEBAR_H
#define UI_MAINTITLEBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainTitleBar
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameBorder;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTitleName;
    QLabel *labelImage;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendBtn;
    QPushButton *pushButtonMin;
    QPushButton *pushButtonNormalMax;
    QPushButton *pushButtonClose;

    void setupUi(QWidget *MainTitleBar)
    {
        if (MainTitleBar->objectName().isEmpty())
            MainTitleBar->setObjectName(QString::fromUtf8("MainTitleBar"));
        MainTitleBar->resize(688, 50);
        MainTitleBar->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(MainTitleBar);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frameBorder = new QFrame(MainTitleBar);
        frameBorder->setObjectName(QString::fromUtf8("frameBorder"));
        frameBorder->setFrameShape(QFrame::StyledPanel);
        frameBorder->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frameBorder);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 9, 9, 9);
        labelTitleName = new QLabel(frameBorder);
        labelTitleName->setObjectName(QString::fromUtf8("labelTitleName"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        labelTitleName->setFont(font);
        labelTitleName->setScaledContents(true);

        horizontalLayout->addWidget(labelTitleName);

        labelImage = new QLabel(frameBorder);
        labelImage->setObjectName(QString::fromUtf8("labelImage"));
        labelImage->setMinimumSize(QSize(30, 30));
        labelImage->setMaximumSize(QSize(30, 30));
        labelImage->setPixmap(QPixmap(QString::fromUtf8(":/image/robot.png")));
        labelImage->setScaledContents(true);

        horizontalLayout->addWidget(labelImage);

        horizontalSpacer = new QSpacerItem(492, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        sendBtn = new QPushButton(frameBorder);
        sendBtn->setObjectName(QString::fromUtf8("sendBtn"));
        sendBtn->setMinimumSize(QSize(25, 25));
        sendBtn->setMaximumSize(QSize(25, 25));
        QFont font1;
        font1.setPointSize(6);
        sendBtn->setFont(font1);

        horizontalLayout->addWidget(sendBtn);

        pushButtonMin = new QPushButton(frameBorder);
        pushButtonMin->setObjectName(QString::fromUtf8("pushButtonMin"));
        pushButtonMin->setMinimumSize(QSize(25, 25));
        pushButtonMin->setMaximumSize(QSize(25, 25));
        pushButtonMin->setFont(font1);
        pushButtonMin->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(pushButtonMin);

        pushButtonNormalMax = new QPushButton(frameBorder);
        pushButtonNormalMax->setObjectName(QString::fromUtf8("pushButtonNormalMax"));
        pushButtonNormalMax->setMinimumSize(QSize(25, 25));
        pushButtonNormalMax->setMaximumSize(QSize(25, 25));
        pushButtonNormalMax->setFont(font1);
        pushButtonNormalMax->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(pushButtonNormalMax);

        pushButtonClose = new QPushButton(frameBorder);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setMinimumSize(QSize(25, 25));
        pushButtonClose->setMaximumSize(QSize(25, 25));

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addWidget(frameBorder);


        retranslateUi(MainTitleBar);

        QMetaObject::connectSlotsByName(MainTitleBar);
    } // setupUi

    void retranslateUi(QWidget *MainTitleBar)
    {
        MainTitleBar->setWindowTitle(QApplication::translate("MainTitleBar", "Form", nullptr));
        labelTitleName->setText(QApplication::translate("MainTitleBar", "Zero Robot", nullptr));
        labelImage->setText(QString());
        sendBtn->setText(QString());
        pushButtonMin->setText(QString());
        pushButtonNormalMax->setText(QString());
        pushButtonClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainTitleBar: public Ui_MainTitleBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTITLEBAR_H
