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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "CBBaseBlock.h"

QT_BEGIN_NAMESPACE

class Ui_ConsoleBlocksClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QFrame *blockframe;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    CBBaseBlock *widget;
    CBBaseBlock *widget_3;
    CBBaseBlock *widget_4;
    CBBaseBlock *widget_2;
    QFrame *frame;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ConsoleBlocksClass)
    {
        if (ConsoleBlocksClass->objectName().isEmpty())
            ConsoleBlocksClass->setObjectName(QStringLiteral("ConsoleBlocksClass"));
        ConsoleBlocksClass->resize(899, 623);
        QFont font;
        font.setItalic(false);
        font.setUnderline(false);
        ConsoleBlocksClass->setFont(font);
        centralWidget = new QWidget(ConsoleBlocksClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        blockframe = new QFrame(centralWidget);
        blockframe->setObjectName(QStringLiteral("blockframe"));
        blockframe->setFrameShape(QFrame::StyledPanel);
        blockframe->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(blockframe);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(blockframe);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setFamily(QStringLiteral("Bahnschrift SemiBold Condensed"));
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        label->setFont(font1);
        label->setTextFormat(Qt::RichText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label->setWordWrap(false);

        verticalLayout->addWidget(label);

        widget = new CBBaseBlock(blockframe);
        widget->setObjectName(QStringLiteral("widget"));

        verticalLayout->addWidget(widget);

        widget_3 = new CBBaseBlock(blockframe);
        widget_3->setObjectName(QStringLiteral("widget_3"));

        verticalLayout->addWidget(widget_3);

        widget_4 = new CBBaseBlock(blockframe);
        widget_4->setObjectName(QStringLiteral("widget_4"));

        verticalLayout->addWidget(widget_4);

        widget_2 = new CBBaseBlock(blockframe);
        widget_2->setObjectName(QStringLiteral("widget_2"));

        verticalLayout->addWidget(widget_2);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addWidget(blockframe);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(frame);

        ConsoleBlocksClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ConsoleBlocksClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 899, 22));
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
        label->setText(QApplication::translate("ConsoleBlocksClass", "BLOCK SHELF", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConsoleBlocksClass: public Ui_ConsoleBlocksClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLEBLOCKS_H
