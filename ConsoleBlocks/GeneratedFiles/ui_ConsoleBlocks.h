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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConsoleBlocksClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ConsoleBlocksClass)
    {
        if (ConsoleBlocksClass->objectName().isEmpty())
            ConsoleBlocksClass->setObjectName(QStringLiteral("ConsoleBlocksClass"));
        ConsoleBlocksClass->resize(600, 400);
        menuBar = new QMenuBar(ConsoleBlocksClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        ConsoleBlocksClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ConsoleBlocksClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ConsoleBlocksClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ConsoleBlocksClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ConsoleBlocksClass->setCentralWidget(centralWidget);
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
