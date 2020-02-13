/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *WiFiBox;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLabel *label_7;
    QSpacerItem *verticalSpacer;
    QGroupBox *RaspberryBox;
    QGroupBox *JoystickBox;
    QCheckBox *checkBox;
    QGroupBox *SoftwareBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->resize(800, 600);
        verticalLayout = new QVBoxLayout(Settings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        WiFiBox = new QGroupBox(Settings);
        WiFiBox->setObjectName(QString::fromUtf8("WiFiBox"));
        gridLayout_2 = new QGridLayout(WiFiBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_8 = new QLabel(WiFiBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(16777215, 25));

        gridLayout_2->addWidget(label_8, 4, 1, 1, 1);

        lineEdit = new QLineEdit(WiFiBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(200, 25));

        gridLayout_2->addWidget(lineEdit, 1, 1, 1, 1);

        comboBox = new QComboBox(WiFiBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(200, 0));
        comboBox->setMaximumSize(QSize(200, 25));

        gridLayout_2->addWidget(comboBox, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        pushButton = new QPushButton(WiFiBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(200, 25));

        gridLayout_2->addWidget(pushButton, 3, 1, 1, 1);

        lineEdit_2 = new QLineEdit(WiFiBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMaximumSize(QSize(200, 25));

        gridLayout_2->addWidget(lineEdit_2, 2, 1, 1, 1);

        label_7 = new QLabel(WiFiBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(16777215, 25));

        gridLayout_2->addWidget(label_7, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_2->addItem(verticalSpacer, 5, 1, 1, 1);


        verticalLayout->addWidget(WiFiBox);

        RaspberryBox = new QGroupBox(Settings);
        RaspberryBox->setObjectName(QString::fromUtf8("RaspberryBox"));
        RaspberryBox->setMaximumSize(QSize(16777215, 100));

        verticalLayout->addWidget(RaspberryBox);

        JoystickBox = new QGroupBox(Settings);
        JoystickBox->setObjectName(QString::fromUtf8("JoystickBox"));
        JoystickBox->setMaximumSize(QSize(16777215, 100));
        checkBox = new QCheckBox(JoystickBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(30, 50, 92, 23));

        verticalLayout->addWidget(JoystickBox);

        SoftwareBox = new QGroupBox(Settings);
        SoftwareBox->setObjectName(QString::fromUtf8("SoftwareBox"));
        gridLayout = new QGridLayout(SoftwareBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(SoftwareBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(SoftwareBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 1, 1, 1);

        label_6 = new QLabel(SoftwareBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 1, 1, 1);

        label_3 = new QLabel(SoftwareBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_5 = new QLabel(SoftwareBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 1, 1, 1);

        label = new QLabel(SoftwareBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addWidget(SoftwareBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Form", nullptr));
        WiFiBox->setTitle(QApplication::translate("Settings", "ROBOT WIFI SETTINGS", nullptr));
        label_8->setText(QApplication::translate("Settings", "SWITCH ROBOT TO HOTSPOT MODE", nullptr));
        pushButton->setText(QApplication::translate("Settings", "CONNECT ROBOT TO WI-FI", nullptr));
        label_7->setText(QApplication::translate("Settings", "Current selected robot IP :", nullptr));
        RaspberryBox->setTitle(QApplication::translate("Settings", "RASPBERRY PI SETTINGS", nullptr));
        JoystickBox->setTitle(QApplication::translate("Settings", "JOYSTICK", nullptr));
        checkBox->setText(QApplication::translate("Settings", "Disabled", nullptr));
        SoftwareBox->setTitle(QApplication::translate("Settings", "SOFTWARE VERSIONS", nullptr));
        label_2->setText(QApplication::translate("Settings", "Connect to the robot to get current version", nullptr));
        label_4->setText(QApplication::translate("Settings", "Zero Rbot Studio :", nullptr));
        label_6->setText(QApplication::translate("Settings", "Zero Stepper firmware :", nullptr));
        label_3->setText(QApplication::translate("Settings", "Lastest available version :", nullptr));
        label_5->setText(QApplication::translate("Settings", "Raspberry Pi 3 image :", nullptr));
        label->setText(QApplication::translate("Settings", "Current version", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
