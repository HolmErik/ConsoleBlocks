/********************************************************************************
** Form generated from reading UI file 'ConsoleBlocks.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLEBLOCKS_H
#define UI_CONSOLEBLOCKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "BlockBase/CBBaseBlock.h"

QT_BEGIN_NAMESPACE

class Ui_ConsoleBlocksClass
{
public:
    QWidget *centralWidget;
    QListWidget *listWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    CBBaseBlock *widget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ConsoleBlocksClass)
    {
        if (ConsoleBlocksClass->objectName().isEmpty())
            ConsoleBlocksClass->setObjectName(QStringLiteral("ConsoleBlocksClass"));
        ConsoleBlocksClass->resize(600, 400);
        centralWidget = new QWidget(ConsoleBlocksClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 221, 341));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, -1, 221, 341));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new CBBaseBlock(verticalLayoutWidget);
        widget->setObjectName(QStringLiteral("widget"));

        verticalLayout->addWidget(widget);

        ConsoleBlocksClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ConsoleBlocksClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        ConsoleBlocksClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ConsoleBlocksClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ConsoleBlocksClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ConsoleBlocksClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ConsoleBlocksClass->setStatusBar(statusBar);

        retranslateUi(ConsoleBlocksClass);

        QMetaObject::connectSlotsByName(ConsoleBlocksClass);
    } // setupUi

    void retranslateUi(QMainWindow *ConsoleBlocksClass)
    {
        ConsoleBlocksClass->setWindowTitle(QApplication::translate("ConsoleBlocksClass", "ConsoleBlocks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConsoleBlocksClass: public Ui_ConsoleBlocksClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLEBLOCKS_H
