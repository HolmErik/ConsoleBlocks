/********************************************************************************
** Form generated from reading UI file 'VariableBlock_Canvas.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VARIABLEBLOCK_CANVAS_H
#define UI_VARIABLEBLOCK_CANVAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>
#include "cbbaseblock.h"

QT_BEGIN_NAMESPACE

class Ui_VariableBlock_Canvas
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPlainTextEdit *InputName;
    QLabel *label_2;
    QPlainTextEdit *InputValue;

    void setupUi(CBBaseBlock *VariableBlock_Canvas)
    {
        if (VariableBlock_Canvas->objectName().isEmpty())
            VariableBlock_Canvas->setObjectName(QStringLiteral("VariableBlock_Canvas"));
        VariableBlock_Canvas->resize(400, 32);
        VariableBlock_Canvas->setMaximumSize(QSize(400, 32));
        horizontalLayout = new QHBoxLayout(VariableBlock_Canvas);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(VariableBlock_Canvas);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(16777215, 32));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(8, 4, 8, 4);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        InputName = new QPlainTextEdit(widget);
        InputName->setObjectName(QStringLiteral("InputName"));
        InputName->setMaximumSize(QSize(16777215, 32));
        InputName->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        InputName->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        InputName->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_2->addWidget(InputName);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setTextFormat(Qt::PlainText);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        InputValue = new QPlainTextEdit(widget);
        InputValue->setObjectName(QStringLiteral("InputValue"));
        InputValue->setMaximumSize(QSize(16777215, 32));
        InputValue->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        InputValue->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        InputValue->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_2->addWidget(InputValue);


        horizontalLayout->addWidget(widget);


        retranslateUi(VariableBlock_Canvas);

        QMetaObject::connectSlotsByName(VariableBlock_Canvas);
    } // setupUi

    void retranslateUi(CBBaseBlock *VariableBlock_Canvas)
    {
        VariableBlock_Canvas->setWindowTitle(QApplication::translate("VariableBlock_Canvas", "VariableBlock_Canvas", nullptr));
        label->setText(QApplication::translate("VariableBlock_Canvas", "DEFINE ", nullptr));
        label_2->setText(QApplication::translate("VariableBlock_Canvas", "AS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VariableBlock_Canvas: public Ui_VariableBlock_Canvas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VARIABLEBLOCK_CANVAS_H
