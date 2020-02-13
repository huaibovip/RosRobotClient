/********************************************************************************
** Form generated from reading UI file 'information.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_H
#define UI_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Information
{
public:
    QGridLayout *gridLayout;
    QGroupBox *jointsBox;
    QVBoxLayout *verticalLayout;
    QLabel *jointsLabel;
    QLabel *jointValue_1;
    QLabel *jointValue_2;
    QLabel *jointValue_3;
    QLabel *jointValue_4;
    QLabel *jointValue_5;
    QLabel *jointValue_6;
    QSpacerItem *vSpacer_1;
    QVBoxLayout *vLayout;
    QPushButton *saveJointBtn;
    QSpacerItem *vSpacer_2;
    QGroupBox *poseBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *posLabel;
    QHBoxLayout *hLayout_px;
    QLabel *label_6;
    QLabel *label_2;
    QHBoxLayout *hLayout_py;
    QLabel *label_7;
    QLabel *label_3;
    QHBoxLayout *hLayout_pz;
    QLabel *label_4;
    QLabel *label_8;
    QSpacerItem *vSpacer_3;
    QLabel *rotLabel;
    QHBoxLayout *hLayout_rx;
    QLabel *label_9;
    QLabel *label_5;
    QHBoxLayout *hLayout_ry;
    QLabel *label_11;
    QLabel *label_10;
    QHBoxLayout *hLayout_rz;
    QLabel *label_13;
    QLabel *label_12;
    QSpacerItem *vSpacer_4;
    QGroupBox *toolBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QGroupBox *speedBox;
    QHBoxLayout *horizontalLayout;
    QLabel *infoLabel;
    QPushButton *speedEditBtn;

    void setupUi(QWidget *Information)
    {
        if (Information->objectName().isEmpty())
            Information->setObjectName(QString::fromUtf8("Information"));
        Information->resize(800, 600);
        gridLayout = new QGridLayout(Information);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(18);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(9, 9, 45, 90);
        jointsBox = new QGroupBox(Information);
        jointsBox->setObjectName(QString::fromUtf8("jointsBox"));
        verticalLayout = new QVBoxLayout(jointsBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(72, -1, 72, -1);
        jointsLabel = new QLabel(jointsBox);
        jointsLabel->setObjectName(QString::fromUtf8("jointsLabel"));
        jointsLabel->setMinimumSize(QSize(0, 40));
        jointsLabel->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        jointsLabel->setFont(font);

        verticalLayout->addWidget(jointsLabel);

        jointValue_1 = new QLabel(jointsBox);
        jointValue_1->setObjectName(QString::fromUtf8("jointValue_1"));
        jointValue_1->setMaximumSize(QSize(16777215, 20));
        jointValue_1->setWordWrap(false);
        jointValue_1->setMargin(25);

        verticalLayout->addWidget(jointValue_1);

        jointValue_2 = new QLabel(jointsBox);
        jointValue_2->setObjectName(QString::fromUtf8("jointValue_2"));
        jointValue_2->setMaximumSize(QSize(16777215, 20));
        jointValue_2->setMargin(25);

        verticalLayout->addWidget(jointValue_2);

        jointValue_3 = new QLabel(jointsBox);
        jointValue_3->setObjectName(QString::fromUtf8("jointValue_3"));
        jointValue_3->setMaximumSize(QSize(16777215, 20));
        jointValue_3->setMargin(25);

        verticalLayout->addWidget(jointValue_3);

        jointValue_4 = new QLabel(jointsBox);
        jointValue_4->setObjectName(QString::fromUtf8("jointValue_4"));
        jointValue_4->setMaximumSize(QSize(16777215, 20));
        jointValue_4->setMargin(25);

        verticalLayout->addWidget(jointValue_4);

        jointValue_5 = new QLabel(jointsBox);
        jointValue_5->setObjectName(QString::fromUtf8("jointValue_5"));
        jointValue_5->setMaximumSize(QSize(16777215, 20));
        jointValue_5->setMargin(25);

        verticalLayout->addWidget(jointValue_5);

        jointValue_6 = new QLabel(jointsBox);
        jointValue_6->setObjectName(QString::fromUtf8("jointValue_6"));
        jointValue_6->setMaximumSize(QSize(16777215, 20));
        jointValue_6->setMargin(25);

        verticalLayout->addWidget(jointValue_6);

        vSpacer_1 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(vSpacer_1);

        vLayout = new QVBoxLayout();
        vLayout->setObjectName(QString::fromUtf8("vLayout"));
        vLayout->setContentsMargins(20, -1, -1, -1);
        saveJointBtn = new QPushButton(jointsBox);
        saveJointBtn->setObjectName(QString::fromUtf8("saveJointBtn"));
        saveJointBtn->setMinimumSize(QSize(50, 25));
        saveJointBtn->setMaximumSize(QSize(50, 25));

        vLayout->addWidget(saveJointBtn);


        verticalLayout->addLayout(vLayout);

        vSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(vSpacer_2);


        gridLayout->addWidget(jointsBox, 0, 0, 1, 1);

        poseBox = new QGroupBox(Information);
        poseBox->setObjectName(QString::fromUtf8("poseBox"));
        verticalLayout_3 = new QVBoxLayout(poseBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(72, -1, 72, -1);
        posLabel = new QLabel(poseBox);
        posLabel->setObjectName(QString::fromUtf8("posLabel"));
        posLabel->setMinimumSize(QSize(0, 40));
        posLabel->setMaximumSize(QSize(16777215, 40));
        posLabel->setFont(font);

        verticalLayout_3->addWidget(posLabel);

        hLayout_px = new QHBoxLayout();
        hLayout_px->setObjectName(QString::fromUtf8("hLayout_px"));
        hLayout_px->setContentsMargins(20, -1, -1, -1);
        label_6 = new QLabel(poseBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(20, 0));
        label_6->setMaximumSize(QSize(20, 16777215));

        hLayout_px->addWidget(label_6);

        label_2 = new QLabel(poseBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hLayout_px->addWidget(label_2);


        verticalLayout_3->addLayout(hLayout_px);

        hLayout_py = new QHBoxLayout();
        hLayout_py->setObjectName(QString::fromUtf8("hLayout_py"));
        hLayout_py->setContentsMargins(20, -1, -1, -1);
        label_7 = new QLabel(poseBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(20, 0));
        label_7->setMaximumSize(QSize(20, 16777215));

        hLayout_py->addWidget(label_7);

        label_3 = new QLabel(poseBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hLayout_py->addWidget(label_3);


        verticalLayout_3->addLayout(hLayout_py);

        hLayout_pz = new QHBoxLayout();
        hLayout_pz->setObjectName(QString::fromUtf8("hLayout_pz"));
        hLayout_pz->setContentsMargins(20, -1, -1, -1);
        label_4 = new QLabel(poseBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(20, 0));
        label_4->setMaximumSize(QSize(20, 16777215));

        hLayout_pz->addWidget(label_4);

        label_8 = new QLabel(poseBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        hLayout_pz->addWidget(label_8);


        verticalLayout_3->addLayout(hLayout_pz);

        vSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_3->addItem(vSpacer_3);

        rotLabel = new QLabel(poseBox);
        rotLabel->setObjectName(QString::fromUtf8("rotLabel"));
        rotLabel->setMinimumSize(QSize(0, 40));
        rotLabel->setMaximumSize(QSize(16777215, 40));
        QFont font1;
        font1.setPointSize(14);
        rotLabel->setFont(font1);

        verticalLayout_3->addWidget(rotLabel);

        hLayout_rx = new QHBoxLayout();
        hLayout_rx->setObjectName(QString::fromUtf8("hLayout_rx"));
        hLayout_rx->setContentsMargins(20, -1, -1, -1);
        label_9 = new QLabel(poseBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(20, 0));
        label_9->setMaximumSize(QSize(20, 16777215));

        hLayout_rx->addWidget(label_9);

        label_5 = new QLabel(poseBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        hLayout_rx->addWidget(label_5);


        verticalLayout_3->addLayout(hLayout_rx);

        hLayout_ry = new QHBoxLayout();
        hLayout_ry->setObjectName(QString::fromUtf8("hLayout_ry"));
        hLayout_ry->setContentsMargins(20, -1, -1, -1);
        label_11 = new QLabel(poseBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(20, 0));
        label_11->setMaximumSize(QSize(20, 16777215));

        hLayout_ry->addWidget(label_11);

        label_10 = new QLabel(poseBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        hLayout_ry->addWidget(label_10);


        verticalLayout_3->addLayout(hLayout_ry);

        hLayout_rz = new QHBoxLayout();
        hLayout_rz->setObjectName(QString::fromUtf8("hLayout_rz"));
        hLayout_rz->setContentsMargins(20, -1, -1, -1);
        label_13 = new QLabel(poseBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(20, 0));
        label_13->setMaximumSize(QSize(20, 16777215));

        hLayout_rz->addWidget(label_13);

        label_12 = new QLabel(poseBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        hLayout_rz->addWidget(label_12);


        verticalLayout_3->addLayout(hLayout_rz);

        vSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_3->addItem(vSpacer_4);


        gridLayout->addWidget(poseBox, 0, 1, 1, 1);

        toolBox = new QGroupBox(Information);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setMinimumSize(QSize(0, 80));
        toolBox->setMaximumSize(QSize(16777215, 80));
        horizontalLayout_2 = new QHBoxLayout(toolBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(72, -1, -1, -1);
        label = new QLabel(toolBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);


        gridLayout->addWidget(toolBox, 1, 1, 1, 1);

        speedBox = new QGroupBox(Information);
        speedBox->setObjectName(QString::fromUtf8("speedBox"));
        speedBox->setMinimumSize(QSize(0, 80));
        speedBox->setMaximumSize(QSize(16777215, 80));
        horizontalLayout = new QHBoxLayout(speedBox);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        infoLabel = new QLabel(speedBox);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setMaximumSize(QSize(150, 16777215));
        QFont font2;
        font2.setPointSize(12);
        infoLabel->setFont(font2);

        horizontalLayout->addWidget(infoLabel);

        speedEditBtn = new QPushButton(speedBox);
        speedEditBtn->setObjectName(QString::fromUtf8("speedEditBtn"));
        speedEditBtn->setMinimumSize(QSize(50, 25));
        speedEditBtn->setMaximumSize(QSize(50, 25));

        horizontalLayout->addWidget(speedEditBtn);


        gridLayout->addWidget(speedBox, 1, 0, 1, 1);


        retranslateUi(Information);

        QMetaObject::connectSlotsByName(Information);
    } // setupUi

    void retranslateUi(QWidget *Information)
    {
        Information->setWindowTitle(QApplication::translate("Information", "Form", nullptr));
        jointsBox->setTitle(QString());
        jointsLabel->setText(QApplication::translate("Information", "Joints (rad)", nullptr));
        jointValue_1->setText(QApplication::translate("Information", "0.000", nullptr));
        jointValue_2->setText(QApplication::translate("Information", "0.000", nullptr));
        jointValue_3->setText(QApplication::translate("Information", "0.000", nullptr));
        jointValue_4->setText(QApplication::translate("Information", "0.000", nullptr));
        jointValue_5->setText(QApplication::translate("Information", "0.000", nullptr));
        jointValue_6->setText(QApplication::translate("Information", "0.000", nullptr));
        saveJointBtn->setText(QApplication::translate("Information", "Save", nullptr));
        poseBox->setTitle(QString());
        posLabel->setText(QApplication::translate("Information", "Position (m)", nullptr));
        label_6->setText(QApplication::translate("Information", "X :", nullptr));
        label_2->setText(QApplication::translate("Information", "0.000", nullptr));
        label_7->setText(QApplication::translate("Information", "Y :", nullptr));
        label_3->setText(QApplication::translate("Information", "0.000", nullptr));
        label_4->setText(QApplication::translate("Information", "Z :", nullptr));
        label_8->setText(QApplication::translate("Information", "0.000", nullptr));
        rotLabel->setText(QApplication::translate("Information", "Roation (rad)", nullptr));
        label_9->setText(QApplication::translate("Information", "X :", nullptr));
        label_5->setText(QApplication::translate("Information", "0.000", nullptr));
        label_11->setText(QApplication::translate("Information", "Y :", nullptr));
        label_10->setText(QApplication::translate("Information", "0.000", nullptr));
        label_13->setText(QApplication::translate("Information", "Z :", nullptr));
        label_12->setText(QApplication::translate("Information", "0.000", nullptr));
        toolBox->setTitle(QString());
        label->setText(QApplication::translate("Information", "Not tool selected", nullptr));
        speedBox->setTitle(QString());
        infoLabel->setText(QApplication::translate("Information", "Arm max speed - %", nullptr));
        speedEditBtn->setText(QApplication::translate("Information", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Information: public Ui_Information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
