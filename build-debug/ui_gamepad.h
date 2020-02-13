/********************************************************************************
** Form generated from reading UI file 'gamepad.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEPAD_H
#define UI_GAMEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GamePad
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *ArmCmdBox;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *ArmTabWidget;
    QWidget *tabJoint;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *vLayout_1;
    QHBoxLayout *hLayout_1_1;
    QLabel *jointLabel_1;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *jointEdit_1;
    QSpacerItem *horizontalSpacer;
    QSlider *horizontalSlider;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *hLayout_1_2;
    QLabel *jointLabel_2;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *jointEdit_2;
    QSpacerItem *horizontalSpacer_2;
    QSlider *horizontalSlider_2;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *hLayout_1_3;
    QLabel *jointLabel_3;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *jointEdit_3;
    QSpacerItem *horizontalSpacer_3;
    QSlider *horizontalSlider_3;
    QSpacerItem *horizontalSpacer_15;
    QHBoxLayout *hLayout_1_4;
    QLabel *jointLabel_4;
    QSpacerItem *horizontalSpacer_10;
    QLineEdit *jointEdit_4;
    QSpacerItem *horizontalSpacer_4;
    QSlider *horizontalSlider_4;
    QSpacerItem *horizontalSpacer_16;
    QHBoxLayout *hLayout_1_5;
    QLabel *jointLabel_5;
    QSpacerItem *horizontalSpacer_11;
    QLineEdit *jointEdit_5;
    QSpacerItem *horizontalSpacer_5;
    QSlider *horizontalSlider_5;
    QSpacerItem *horizontalSpacer_17;
    QHBoxLayout *hLayout_1_6;
    QLabel *jointLabel_6;
    QSpacerItem *horizontalSpacer_12;
    QLineEdit *jointEdit_6;
    QSpacerItem *horizontalSpacer_6;
    QSlider *horizontalSlider_6;
    QSpacerItem *horizontalSpacer_18;
    QVBoxLayout *vLayout_2;
    QVBoxLayout *vLayout_2_1;
    QPushButton *moveButton;
    QVBoxLayout *vLayout_2_2;
    QPushButton *stopButton;
    QVBoxLayout *vLayout_2_3;
    QPushButton *setButton;
    QVBoxLayout *vLayout_2_4;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_20;
    QWidget *tabPosition;
    QGroupBox *ToolCmdBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *hLayout_1;
    QComboBox *comboBox_2;
    QSpacerItem *hSpacer_1;
    QPushButton *pushButton;
    QSpacerItem *hSpacer_2;
    QHBoxLayout *hLayout_2;
    QLabel *label;
    QHBoxLayout *hLayout_3;
    QSpacerItem *vSpacer_1;

    void setupUi(QWidget *GamePad)
    {
        if (GamePad->objectName().isEmpty())
            GamePad->setObjectName(QString::fromUtf8("GamePad"));
        GamePad->resize(800, 600);
        verticalLayout = new QVBoxLayout(GamePad);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ArmCmdBox = new QGroupBox(GamePad);
        ArmCmdBox->setObjectName(QString::fromUtf8("ArmCmdBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        ArmCmdBox->setFont(font);
        ArmCmdBox->setAutoFillBackground(false);
        ArmCmdBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border-width: 0px;\n"
"	border-style: solid;\n"
"	margin-top: 0.5ex;\n"
"}\n"
"QGroupBox::title {\n"
"	subcontrol-origin: margin;\n"
"	subcontrol-position: top left;\n"
"	left: 10px;\n"
"	margin-left: 2px;\n"
"	margin-top:	5px;\n"
"	padding: 0  0px;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        ArmCmdBox->setFlat(false);
        ArmCmdBox->setCheckable(false);
        verticalLayout_2 = new QVBoxLayout(ArmCmdBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(25, 35, 30, 5);
        ArmTabWidget = new QTabWidget(ArmCmdBox);
        ArmTabWidget->setObjectName(QString::fromUtf8("ArmTabWidget"));
        ArmTabWidget->setStyleSheet(QString::fromUtf8("QTabWidget  {\n"
"	background-color:	rgb(30,30,30)\n"
"}"));
        ArmTabWidget->setTabPosition(QTabWidget::North);
        ArmTabWidget->setElideMode(Qt::ElideNone);
        ArmTabWidget->setUsesScrollButtons(true);
        ArmTabWidget->setDocumentMode(false);
        ArmTabWidget->setTabsClosable(false);
        ArmTabWidget->setMovable(false);
        ArmTabWidget->setTabBarAutoHide(false);
        tabJoint = new QWidget();
        tabJoint->setObjectName(QString::fromUtf8("tabJoint"));
        horizontalLayout_4 = new QHBoxLayout(tabJoint);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        vLayout_1 = new QVBoxLayout();
        vLayout_1->setObjectName(QString::fromUtf8("vLayout_1"));
        vLayout_1->setContentsMargins(5, -1, 5, -1);
        hLayout_1_1 = new QHBoxLayout();
        hLayout_1_1->setObjectName(QString::fromUtf8("hLayout_1_1"));
        hLayout_1_1->setContentsMargins(-1, -1, -1, 0);
        jointLabel_1 = new QLabel(tabJoint);
        jointLabel_1->setObjectName(QString::fromUtf8("jointLabel_1"));
        jointLabel_1->setMargin(6);

        hLayout_1_1->addWidget(jointLabel_1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout_1_1->addItem(horizontalSpacer_7);

        jointEdit_1 = new QLineEdit(tabJoint);
        jointEdit_1->setObjectName(QString::fromUtf8("jointEdit_1"));
        jointEdit_1->setMaximumSize(QSize(60, 16777215));
        jointEdit_1->setCursorPosition(0);
        jointEdit_1->setClearButtonEnabled(false);

        hLayout_1_1->addWidget(jointEdit_1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout_1_1->addItem(horizontalSpacer);

        horizontalSlider = new QSlider(tabJoint);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimumSize(QSize(120, 0));
        horizontalSlider->setMinimum(-128);
        horizontalSlider->setMaximum(127);
        horizontalSlider->setOrientation(Qt::Horizontal);

        hLayout_1_1->addWidget(horizontalSlider);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout_1_1->addItem(horizontalSpacer_13);

        hLayout_1_1->setStretch(4, 1);

        vLayout_1->addLayout(hLayout_1_1);

        hLayout_1_2 = new QHBoxLayout();
        hLayout_1_2->setObjectName(QString::fromUtf8("hLayout_1_2"));
        jointLabel_2 = new QLabel(tabJoint);
        jointLabel_2->setObjectName(QString::fromUtf8("jointLabel_2"));
        jointLabel_2->setMargin(6);

        hLayout_1_2->addWidget(jointLabel_2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout_1_2->addItem(horizontalSpacer_8);

        jointEdit_2 = new QLineEdit(tabJoint);
        jointEdit_2->setObjectName(QString::fromUtf8("jointEdit_2"));
        jointEdit_2->setMaximumSize(QSize(60, 16777215));

        hLayout_1_2->addWidget(jointEdit_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout_1_2->addItem(horizontalSpacer_2);

        horizontalSlider_2 = new QSlider(tabJoint);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setMinimumSize(QSize(120, 0));
        horizontalSlider_2->setMinimum(-128);
        horizontalSlider_2->setMaximum(127);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        hLayout_1_2->addWidget(horizontalSlider_2);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout_1_2->addItem(horizontalSpacer_14);

        hLayout_1_2->setStretch(4, 1);

        vLayout_1->addLayout(hLayout_1_2);

        hLayout_1_3 = new QHBoxLayout();
        hLayout_1_3->setObjectName(QString::fromUtf8("hLayout_1_3"));
        jointLabel_3 = new QLabel(tabJoint);
        jointLabel_3->setObjectName(QString::fromUtf8("jointLabel_3"));
        jointLabel_3->setMargin(6);

        hLayout_1_3->addWidget(jointLabel_3);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout_1_3->addItem(horizontalSpacer_9);

        jointEdit_3 = new QLineEdit(tabJoint);
        jointEdit_3->setObjectName(QString::fromUtf8("jointEdit_3"));
        jointEdit_3->setMaximumSize(QSize(60, 16777215));

        hLayout_1_3->addWidget(jointEdit_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout_1_3->addItem(horizontalSpacer_3);

        horizontalSlider_3 = new QSlider(tabJoint);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setMinimumSize(QSize(120, 0));
        horizontalSlider_3->setMinimum(-128);
        horizontalSlider_3->setMaximum(127);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        hLayout_1_3->addWidget(horizontalSlider_3);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout_1_3->addItem(horizontalSpacer_15);

        hLayout_1_3->setStretch(4, 1);

        vLayout_1->addLayout(hLayout_1_3);

        hLayout_1_4 = new QHBoxLayout();
        hLayout_1_4->setObjectName(QString::fromUtf8("hLayout_1_4"));
        jointLabel_4 = new QLabel(tabJoint);
        jointLabel_4->setObjectName(QString::fromUtf8("jointLabel_4"));
        jointLabel_4->setMargin(6);

        hLayout_1_4->addWidget(jointLabel_4);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout_1_4->addItem(horizontalSpacer_10);

        jointEdit_4 = new QLineEdit(tabJoint);
        jointEdit_4->setObjectName(QString::fromUtf8("jointEdit_4"));
        jointEdit_4->setMaximumSize(QSize(60, 16777215));

        hLayout_1_4->addWidget(jointEdit_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout_1_4->addItem(horizontalSpacer_4);

        horizontalSlider_4 = new QSlider(tabJoint);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setMinimumSize(QSize(120, 0));
        horizontalSlider_4->setMinimum(-128);
        horizontalSlider_4->setMaximum(127);
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        hLayout_1_4->addWidget(horizontalSlider_4);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout_1_4->addItem(horizontalSpacer_16);

        hLayout_1_4->setStretch(4, 1);

        vLayout_1->addLayout(hLayout_1_4);

        hLayout_1_5 = new QHBoxLayout();
        hLayout_1_5->setObjectName(QString::fromUtf8("hLayout_1_5"));
        jointLabel_5 = new QLabel(tabJoint);
        jointLabel_5->setObjectName(QString::fromUtf8("jointLabel_5"));
        jointLabel_5->setMargin(6);

        hLayout_1_5->addWidget(jointLabel_5);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout_1_5->addItem(horizontalSpacer_11);

        jointEdit_5 = new QLineEdit(tabJoint);
        jointEdit_5->setObjectName(QString::fromUtf8("jointEdit_5"));
        jointEdit_5->setMaximumSize(QSize(60, 16777215));

        hLayout_1_5->addWidget(jointEdit_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout_1_5->addItem(horizontalSpacer_5);

        horizontalSlider_5 = new QSlider(tabJoint);
        horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
        horizontalSlider_5->setMinimumSize(QSize(120, 0));
        horizontalSlider_5->setMinimum(-128);
        horizontalSlider_5->setMaximum(127);
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        hLayout_1_5->addWidget(horizontalSlider_5);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout_1_5->addItem(horizontalSpacer_17);

        hLayout_1_5->setStretch(4, 1);

        vLayout_1->addLayout(hLayout_1_5);

        hLayout_1_6 = new QHBoxLayout();
        hLayout_1_6->setObjectName(QString::fromUtf8("hLayout_1_6"));
        jointLabel_6 = new QLabel(tabJoint);
        jointLabel_6->setObjectName(QString::fromUtf8("jointLabel_6"));
        jointLabel_6->setMargin(6);

        hLayout_1_6->addWidget(jointLabel_6);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout_1_6->addItem(horizontalSpacer_12);

        jointEdit_6 = new QLineEdit(tabJoint);
        jointEdit_6->setObjectName(QString::fromUtf8("jointEdit_6"));
        jointEdit_6->setMaximumSize(QSize(60, 16777215));

        hLayout_1_6->addWidget(jointEdit_6);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout_1_6->addItem(horizontalSpacer_6);

        horizontalSlider_6 = new QSlider(tabJoint);
        horizontalSlider_6->setObjectName(QString::fromUtf8("horizontalSlider_6"));
        horizontalSlider_6->setMinimumSize(QSize(120, 0));
        horizontalSlider_6->setMinimum(-128);
        horizontalSlider_6->setMaximum(127);
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        hLayout_1_6->addWidget(horizontalSlider_6);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout_1_6->addItem(horizontalSpacer_18);

        hLayout_1_6->setStretch(4, 1);

        vLayout_1->addLayout(hLayout_1_6);


        horizontalLayout_4->addLayout(vLayout_1);

        vLayout_2 = new QVBoxLayout();
        vLayout_2->setObjectName(QString::fromUtf8("vLayout_2"));
        vLayout_2->setContentsMargins(20, -1, 20, -1);
        vLayout_2_1 = new QVBoxLayout();
        vLayout_2_1->setObjectName(QString::fromUtf8("vLayout_2_1"));
        moveButton = new QPushButton(tabJoint);
        moveButton->setObjectName(QString::fromUtf8("moveButton"));

        vLayout_2_1->addWidget(moveButton);


        vLayout_2->addLayout(vLayout_2_1);

        vLayout_2_2 = new QVBoxLayout();
        vLayout_2_2->setObjectName(QString::fromUtf8("vLayout_2_2"));
        stopButton = new QPushButton(tabJoint);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));

        vLayout_2_2->addWidget(stopButton);


        vLayout_2->addLayout(vLayout_2_2);

        vLayout_2_3 = new QVBoxLayout();
        vLayout_2_3->setObjectName(QString::fromUtf8("vLayout_2_3"));
        setButton = new QPushButton(tabJoint);
        setButton->setObjectName(QString::fromUtf8("setButton"));

        vLayout_2_3->addWidget(setButton);


        vLayout_2->addLayout(vLayout_2_3);

        vLayout_2_4 = new QVBoxLayout();
        vLayout_2_4->setObjectName(QString::fromUtf8("vLayout_2_4"));
        comboBox = new QComboBox(tabJoint);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        vLayout_2_4->addWidget(comboBox);


        vLayout_2->addLayout(vLayout_2_4);


        horizontalLayout_4->addLayout(vLayout_2);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_20);

        horizontalLayout_4->setStretch(0, 20);
        horizontalLayout_4->setStretch(1, 1);
        ArmTabWidget->addTab(tabJoint, QString());
        tabPosition = new QWidget();
        tabPosition->setObjectName(QString::fromUtf8("tabPosition"));
        ArmTabWidget->addTab(tabPosition, QString());

        verticalLayout_2->addWidget(ArmTabWidget);


        verticalLayout->addWidget(ArmCmdBox);

        ToolCmdBox = new QGroupBox(GamePad);
        ToolCmdBox->setObjectName(QString::fromUtf8("ToolCmdBox"));
        ToolCmdBox->setFont(font);
        ToolCmdBox->setMouseTracking(true);
        ToolCmdBox->setAutoFillBackground(false);
        ToolCmdBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border-width: 0px;\n"
"	border-style: solid;\n"
"	margin-top: 0.5ex;\n"
"}\n"
"QGroupBox::title {\n"
"	subcontrol-origin: margin;\n"
"	subcontrol-position: top left;\n"
"	left: 10px;\n"
"	margin-left: 2px;\n"
"	margin-top:	5px;\n"
"	padding: 0  0px;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        ToolCmdBox->setFlat(false);
        ToolCmdBox->setCheckable(false);
        verticalLayout_3 = new QVBoxLayout(ToolCmdBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(25, 35, 30, 5);
        hLayout_1 = new QHBoxLayout();
        hLayout_1->setObjectName(QString::fromUtf8("hLayout_1"));
        comboBox_2 = new QComboBox(ToolCmdBox);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        hLayout_1->addWidget(comboBox_2);

        hSpacer_1 = new QSpacerItem(10, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        hLayout_1->addItem(hSpacer_1);

        pushButton = new QPushButton(ToolCmdBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        hLayout_1->addWidget(pushButton);

        hSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout_1->addItem(hSpacer_2);


        verticalLayout_3->addLayout(hLayout_1);

        hLayout_2 = new QHBoxLayout();
        hLayout_2->setObjectName(QString::fromUtf8("hLayout_2"));
        label = new QLabel(ToolCmdBox);
        label->setObjectName(QString::fromUtf8("label"));

        hLayout_2->addWidget(label);


        verticalLayout_3->addLayout(hLayout_2);

        hLayout_3 = new QHBoxLayout();
        hLayout_3->setObjectName(QString::fromUtf8("hLayout_3"));
        vSpacer_1 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Maximum);

        hLayout_3->addItem(vSpacer_1);


        verticalLayout_3->addLayout(hLayout_3);


        verticalLayout->addWidget(ToolCmdBox);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 2);

        retranslateUi(GamePad);

        ArmTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GamePad);
    } // setupUi

    void retranslateUi(QWidget *GamePad)
    {
        GamePad->setWindowTitle(QApplication::translate("GamePad", "Form", nullptr));
        ArmCmdBox->setTitle(QApplication::translate("GamePad", "Arm Cammand", nullptr));
        jointLabel_1->setText(QApplication::translate("GamePad", "Joint 1", nullptr));
        jointLabel_2->setText(QApplication::translate("GamePad", "Joint 2", nullptr));
        jointLabel_3->setText(QApplication::translate("GamePad", "Joint 3", nullptr));
        jointLabel_4->setText(QApplication::translate("GamePad", "Joint 4", nullptr));
        jointLabel_5->setText(QApplication::translate("GamePad", "Joint 5", nullptr));
        jointLabel_6->setText(QApplication::translate("GamePad", "Joint 6", nullptr));
        moveButton->setText(QApplication::translate("GamePad", "MOVE JOINTS", nullptr));
        stopButton->setText(QApplication::translate("GamePad", "STOP CAMMAND", nullptr));
        setButton->setText(QApplication::translate("GamePad", "SET TO CURRENT", nullptr));
        comboBox->setCurrentText(QString());
        ArmTabWidget->setTabText(ArmTabWidget->indexOf(tabJoint), QApplication::translate("GamePad", "Joint", nullptr));
        ArmTabWidget->setTabText(ArmTabWidget->indexOf(tabPosition), QApplication::translate("GamePad", "Position", nullptr));
        ToolCmdBox->setTitle(QApplication::translate("GamePad", "Tool Cammand", nullptr));
        pushButton->setText(QApplication::translate("GamePad", "PushButton", nullptr));
        label->setText(QApplication::translate("GamePad", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GamePad: public Ui_GamePad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEPAD_H
