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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "CBBaseBlock.h"
#include "Canvas.h"
#include "ConsoleWidget.h"
#include "cbstartblock.h"

QT_BEGIN_NAMESPACE

class Ui_ConsoleBlocksClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *WorkSpace;
    QHBoxLayout *horizontalLayout_2;
    QWidget *BlockShelf_Parent;
    QVBoxLayout *verticalLayout_2;
    QFrame *BlockShelf_Layout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    CBBaseBlock *widget_6;
    CBBaseBlock *widget_5;
    CBBaseBlock *widget_4;
    CBBaseBlock *widget_3;
    CBBaseBlock *widget_2;
    CBBaseBlock *widget;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    Canvas *canvas;
    CBStartBlock *widget_7;
    ConsoleWidget *CW;
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
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        WorkSpace = new QWidget(centralWidget);
        WorkSpace->setObjectName(QStringLiteral("WorkSpace"));
        horizontalLayout_2 = new QHBoxLayout(WorkSpace);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        BlockShelf_Parent = new QWidget(WorkSpace);
        BlockShelf_Parent->setObjectName(QStringLiteral("BlockShelf_Parent"));
        BlockShelf_Parent->setMaximumSize(QSize(200, 16777215));
        BlockShelf_Parent->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        verticalLayout_2 = new QVBoxLayout(BlockShelf_Parent);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        BlockShelf_Layout = new QFrame(BlockShelf_Parent);
        BlockShelf_Layout->setObjectName(QStringLiteral("BlockShelf_Layout"));
        BlockShelf_Layout->setMaximumSize(QSize(200, 16777215));
        BlockShelf_Layout->setStyleSheet(QStringLiteral(""));
        BlockShelf_Layout->setFrameShape(QFrame::StyledPanel);
        BlockShelf_Layout->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(BlockShelf_Layout);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(BlockShelf_Layout);
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

        widget_6 = new CBBaseBlock(BlockShelf_Layout);
        widget_6->setObjectName(QStringLiteral("widget_6"));

        verticalLayout->addWidget(widget_6);

        widget_5 = new CBBaseBlock(BlockShelf_Layout);
        widget_5->setObjectName(QStringLiteral("widget_5"));

        verticalLayout->addWidget(widget_5);

        widget_4 = new CBBaseBlock(BlockShelf_Layout);
        widget_4->setObjectName(QStringLiteral("widget_4"));

        verticalLayout->addWidget(widget_4);

        widget_3 = new CBBaseBlock(BlockShelf_Layout);
        widget_3->setObjectName(QStringLiteral("widget_3"));

        verticalLayout->addWidget(widget_3);

        widget_2 = new CBBaseBlock(BlockShelf_Layout);
        widget_2->setObjectName(QStringLiteral("widget_2"));

        verticalLayout->addWidget(widget_2);

        widget = new CBBaseBlock(BlockShelf_Layout);
        widget->setObjectName(QStringLiteral("widget"));

        verticalLayout->addWidget(widget);


        verticalLayout_2->addWidget(BlockShelf_Layout);

        widget_8 = new QWidget(BlockShelf_Parent);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setMaximumSize(QSize(16777215, 30));
        horizontalLayout_3 = new QHBoxLayout(widget_8);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget_8);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout_2->addWidget(widget_8);


        horizontalLayout_2->addWidget(BlockShelf_Parent);

        canvas = new Canvas(WorkSpace);
        canvas->setObjectName(QStringLiteral("canvas"));
        canvas->setStyleSheet(QStringLiteral(""));
        widget_7 = new CBStartBlock(canvas);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setGeometry(QRect(30, 170, 441, 61));

        horizontalLayout_2->addWidget(canvas);


        verticalLayout_3->addWidget(WorkSpace);

        CW = new ConsoleWidget(centralWidget);
        CW->setObjectName(QStringLiteral("CW"));
        CW->setMaximumSize(QSize(16777215, 200));

        verticalLayout_3->addWidget(CW);

        ConsoleBlocksClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ConsoleBlocksClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 899, 21));
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
        pushButton->setText(QApplication::translate("ConsoleBlocksClass", "RUN!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConsoleBlocksClass: public Ui_ConsoleBlocksClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLEBLOCKS_H
