/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <controlwidget/Information/information.h>
#include <controlwidget/ModelView/modelview.h>
#include <controlwidget/StackedWidget/controlstackedwidget.h>
#include <controlwidget/TreeWidget/controltreewidget.h>
#include <controlwidget/titlebar/maintitlebar.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    MainTitleBar *widgetTitle;
    QHBoxLayout *horizontalLayout;
    ControlTreeWidget *treeWidgetMenu;
    ControlStackedWidget *stackedWidget;
    QWidget *infoWidget;
    QVBoxLayout *verticalLayout_3;
    ModelView *webView;
    Information *InfoView;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 800);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/robot.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widgetTitle = new MainTitleBar(centralWidget);
        widgetTitle->setObjectName(QString::fromUtf8("widgetTitle"));
        widgetTitle->setMinimumSize(QSize(0, 50));
        widgetTitle->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(widgetTitle);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        treeWidgetMenu = new ControlTreeWidget(centralWidget);
        treeWidgetMenu->setObjectName(QString::fromUtf8("treeWidgetMenu"));
        treeWidgetMenu->setMinimumSize(QSize(160, 0));
        treeWidgetMenu->setMaximumSize(QSize(160, 16777215));

        horizontalLayout->addWidget(treeWidgetMenu);

        stackedWidget = new ControlStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));

        horizontalLayout->addWidget(stackedWidget);

        infoWidget = new QWidget(centralWidget);
        infoWidget->setObjectName(QString::fromUtf8("infoWidget"));
        verticalLayout_3 = new QVBoxLayout(infoWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        webView = new ModelView(infoWidget);
        webView->setObjectName(QString::fromUtf8("webView"));

        verticalLayout_3->addWidget(webView);

        InfoView = new Information(infoWidget);
        InfoView->setObjectName(QString::fromUtf8("InfoView"));
        InfoView->setMinimumSize(QSize(0, 100));

        verticalLayout_3->addWidget(InfoView);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);

        horizontalLayout->addWidget(infoWidget);

        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Zero Robot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
