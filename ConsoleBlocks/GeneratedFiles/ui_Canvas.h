/********************************************************************************
** Form generated from reading UI file 'Canvas.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANVAS_H
#define UI_CANVAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cbstartblock.h"

QT_BEGIN_NAMESPACE

class Ui_Canvas
{
public:
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *BlockParent;
    QVBoxLayout *verticalLayout;
    CBStartBlock *StartBlock;

    void setupUi(QWidget *Canvas)
    {
        if (Canvas->objectName().isEmpty())
            Canvas->setObjectName(QStringLiteral("Canvas"));
        Canvas->resize(400, 300);
        Canvas->setStyleSheet(QLatin1String("background-color: rgb(0, 255, 255);\n"
"background-color: rgb(0, 255, 255);"));
        verticalLayout_2 = new QVBoxLayout(Canvas);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        scrollArea = new QScrollArea(Canvas);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        BlockParent = new QWidget();
        BlockParent->setObjectName(QStringLiteral("BlockParent"));
        BlockParent->setGeometry(QRect(0, 0, 394, 294));
        verticalLayout = new QVBoxLayout(BlockParent);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        StartBlock = new CBStartBlock(BlockParent);
        StartBlock->setObjectName(QStringLiteral("StartBlock"));

        verticalLayout->addWidget(StartBlock);

        scrollArea->setWidget(BlockParent);

        verticalLayout_2->addWidget(scrollArea);


        retranslateUi(Canvas);

        QMetaObject::connectSlotsByName(Canvas);
    } // setupUi

    void retranslateUi(QWidget *Canvas)
    {
        Canvas->setWindowTitle(QApplication::translate("Canvas", "Canvas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Canvas: public Ui_Canvas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANVAS_H
