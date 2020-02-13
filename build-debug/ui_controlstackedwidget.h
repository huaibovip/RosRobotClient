/********************************************************************************
** Form generated from reading UI file 'controlstackedwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLSTACKEDWIDGET_H
#define UI_CONTROLSTACKEDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <controlwidget//Sequences/sequences.h>
#include <controlwidget/Blockly/blockly.h>
#include <controlwidget/Calibration/calibration.h>
#include <controlwidget/Debug/debug.h>
#include <controlwidget/Direction/direction.h>
#include <controlwidget/GamePad/gamepad.h>
#include <controlwidget/Settings/settings.h>
#include <controlwidget/Status/status.h>

QT_BEGIN_NAMESPACE

class Ui_ControlStackedWidget
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidgetControl;
    GamePad *pageGamePad;
    Blockly *pageBlockly;
    Direction *pageDirection;
    Sequences *pageSequences;
    Settings *pageSettings;
    Calibration *pageCalibration;
    Status *pageStatus;
    Debug *pageDebug;

    void setupUi(QWidget *ControlStackedWidget)
    {
        if (ControlStackedWidget->objectName().isEmpty())
            ControlStackedWidget->setObjectName(QString::fromUtf8("ControlStackedWidget"));
        ControlStackedWidget->resize(520, 426);
        verticalLayout = new QVBoxLayout(ControlStackedWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 60, 0);
        stackedWidgetControl = new QStackedWidget(ControlStackedWidget);
        stackedWidgetControl->setObjectName(QString::fromUtf8("stackedWidgetControl"));
        pageGamePad = new GamePad();
        pageGamePad->setObjectName(QString::fromUtf8("pageGamePad"));
        stackedWidgetControl->addWidget(pageGamePad);
        pageBlockly = new Blockly();
        pageBlockly->setObjectName(QString::fromUtf8("pageBlockly"));
        stackedWidgetControl->addWidget(pageBlockly);
        pageDirection = new Direction();
        pageDirection->setObjectName(QString::fromUtf8("pageDirection"));
        stackedWidgetControl->addWidget(pageDirection);
        pageSequences = new Sequences();
        pageSequences->setObjectName(QString::fromUtf8("pageSequences"));
        stackedWidgetControl->addWidget(pageSequences);
        pageSettings = new Settings();
        pageSettings->setObjectName(QString::fromUtf8("pageSettings"));
        stackedWidgetControl->addWidget(pageSettings);
        pageCalibration = new Calibration();
        pageCalibration->setObjectName(QString::fromUtf8("pageCalibration"));
        stackedWidgetControl->addWidget(pageCalibration);
        pageStatus = new Status();
        pageStatus->setObjectName(QString::fromUtf8("pageStatus"));
        stackedWidgetControl->addWidget(pageStatus);
        pageDebug = new Debug();
        pageDebug->setObjectName(QString::fromUtf8("pageDebug"));
        stackedWidgetControl->addWidget(pageDebug);

        verticalLayout->addWidget(stackedWidgetControl);


        retranslateUi(ControlStackedWidget);

        stackedWidgetControl->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(ControlStackedWidget);
    } // setupUi

    void retranslateUi(QWidget *ControlStackedWidget)
    {
        ControlStackedWidget->setWindowTitle(QApplication::translate("ControlStackedWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlStackedWidget: public Ui_ControlStackedWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLSTACKEDWIDGET_H
