/********************************************************************************
** Form generated from reading UI file 'PrintBlock_Canvas.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTBLOCK_CANVAS_H
#define UI_PRINTBLOCK_CANVAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cbbaseblock.h"

QT_BEGIN_NAMESPACE

class Ui_PrintBlock_Canvas
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *DropDown;
    QTextEdit *TE;
    QComboBox *VarDropDown;

    void setupUi(CBBaseBlock *PrintBlock_Canvas)
    {
        if (PrintBlock_Canvas->objectName().isEmpty())
            PrintBlock_Canvas->setObjectName(QStringLiteral("PrintBlock_Canvas"));
        PrintBlock_Canvas->resize(400, 32);
        PrintBlock_Canvas->setMaximumSize(QSize(400, 32));
        verticalLayout = new QVBoxLayout(PrintBlock_Canvas);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(PrintBlock_Canvas);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(400, 32));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(78, 255, 51);"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(8, 4, 8, 4);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(51, 32));

        horizontalLayout->addWidget(label);

        DropDown = new QComboBox(widget);
        DropDown->setObjectName(QStringLiteral("DropDown"));
        DropDown->setMaximumSize(QSize(66, 16777215));
        DropDown->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(DropDown);

        TE = new QTextEdit(widget);
        TE->setObjectName(QStringLiteral("TE"));
        TE->setEnabled(true);
        TE->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(TE);

        VarDropDown = new QComboBox(widget);
        VarDropDown->setObjectName(QStringLiteral("VarDropDown"));
        VarDropDown->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(VarDropDown);


        verticalLayout->addWidget(widget);


        retranslateUi(PrintBlock_Canvas);

        QMetaObject::connectSlotsByName(PrintBlock_Canvas);
    } // setupUi

    void retranslateUi(CBBaseBlock *PrintBlock_Canvas)
    {
        PrintBlock_Canvas->setWindowTitle(QApplication::translate("PrintBlock_Canvas", "PrintBlock_Canvas", nullptr));
        label->setText(QApplication::translate("PrintBlock_Canvas", "SKRIV UT:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrintBlock_Canvas: public Ui_PrintBlock_Canvas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTBLOCK_CANVAS_H
