/********************************************************************************
** Form generated from reading UI file 'controltreewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLTREEWIDGET_H
#define UI_CONTROLTREEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControlTreeWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidgetMenu;

    void setupUi(QWidget *ControlTreeWidget)
    {
        if (ControlTreeWidget->objectName().isEmpty())
            ControlTreeWidget->setObjectName(QString::fromUtf8("ControlTreeWidget"));
        ControlTreeWidget->resize(192, 315);
        verticalLayout = new QVBoxLayout(ControlTreeWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        treeWidgetMenu = new QTreeWidget(ControlTreeWidget);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icon_gamepad_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icon_blocks_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icon_direction_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icon_sequences_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icon_settings_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icon_calibration_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icon_hw_status_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/icon_debug_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem->setIcon(0, icon);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem1->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem2->setIcon(0, icon2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem3->setIcon(0, icon3);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem4->setIcon(0, icon4);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem5->setIcon(0, icon5);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem6->setIcon(0, icon6);
        QTreeWidgetItem *__qtreewidgetitem7 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem7->setIcon(0, icon7);
        treeWidgetMenu->setObjectName(QString::fromUtf8("treeWidgetMenu"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeWidgetMenu->sizePolicy().hasHeightForWidth());
        treeWidgetMenu->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        treeWidgetMenu->setFont(font);
        treeWidgetMenu->header()->setVisible(false);

        verticalLayout->addWidget(treeWidgetMenu);


        retranslateUi(ControlTreeWidget);

        QMetaObject::connectSlotsByName(ControlTreeWidget);
    } // setupUi

    void retranslateUi(QWidget *ControlTreeWidget)
    {
        ControlTreeWidget->setWindowTitle(QApplication::translate("ControlTreeWidget", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidgetMenu->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("ControlTreeWidget", "1", nullptr));

        const bool __sortingEnabled = treeWidgetMenu->isSortingEnabled();
        treeWidgetMenu->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidgetMenu->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("ControlTreeWidget", "GamePad", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidgetMenu->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("ControlTreeWidget", "Blockly", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidgetMenu->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("ControlTreeWidget", "Direction", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidgetMenu->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QApplication::translate("ControlTreeWidget", "Sequences", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidgetMenu->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, QApplication::translate("ControlTreeWidget", "Settings", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidgetMenu->topLevelItem(5);
        ___qtreewidgetitem6->setText(0, QApplication::translate("ControlTreeWidget", "Calibration", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidgetMenu->topLevelItem(6);
        ___qtreewidgetitem7->setText(0, QApplication::translate("ControlTreeWidget", "Status", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidgetMenu->topLevelItem(7);
        ___qtreewidgetitem8->setText(0, QApplication::translate("ControlTreeWidget", "Debug", nullptr));
        treeWidgetMenu->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class ControlTreeWidget: public Ui_ControlTreeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLTREEWIDGET_H
