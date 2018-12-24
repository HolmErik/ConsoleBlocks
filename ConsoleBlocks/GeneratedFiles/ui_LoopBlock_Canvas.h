/********************************************************************************
** Form generated from reading UI file 'LoopBlock_Canvas.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOOPBLOCK_CANVAS_H
#define UI_LOOPBLOCK_CANVAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>
#include "cbbaseblock.h"

QT_BEGIN_NAMESPACE

class Ui_LoopBlock_Canvas
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPlainTextEdit *InParam;
    QLabel *label_2;

    void setupUi(CBBaseBlock *LoopBlock_Canvas)
    {
        if (LoopBlock_Canvas->objectName().isEmpty())
            LoopBlock_Canvas->setObjectName(QStringLiteral("LoopBlock_Canvas"));
        LoopBlock_Canvas->resize(400, 34);
        horizontalLayout = new QHBoxLayout(LoopBlock_Canvas);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(LoopBlock_Canvas);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(255, 28, 202);"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(8, 4, 8, 4);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        InParam = new QPlainTextEdit(widget);
        InParam->setObjectName(QStringLiteral("InParam"));
        InParam->setMaximumSize(QSize(100, 26));
        InParam->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        InParam->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        InParam->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_2->addWidget(InParam);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);


        horizontalLayout->addWidget(widget);


        retranslateUi(LoopBlock_Canvas);

        QMetaObject::connectSlotsByName(LoopBlock_Canvas);
    } // setupUi

    void retranslateUi(CBBaseBlock *LoopBlock_Canvas)
    {
        LoopBlock_Canvas->setWindowTitle(QApplication::translate("LoopBlock_Canvas", "LoopBlock_Canvas", nullptr));
        label->setText(QApplication::translate("LoopBlock_Canvas", "G\303\266r N\303\244sta", nullptr));
        label_2->setText(QApplication::translate("LoopBlock_Canvas", "Antal G\303\245nger:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoopBlock_Canvas: public Ui_LoopBlock_Canvas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOOPBLOCK_CANVAS_H
