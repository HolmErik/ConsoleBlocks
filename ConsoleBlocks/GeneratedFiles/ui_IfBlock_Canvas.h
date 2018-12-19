/********************************************************************************
** Form generated from reading UI file 'IfBlock_Canvas.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IFBLOCK_CANVAS_H
#define UI_IFBLOCK_CANVAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>
#include "cbbaseblock.h"

QT_BEGIN_NAMESPACE

class Ui_IfBlock_Canvas
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *IF;
    QPlainTextEdit *Param0;
    QComboBox *DropDown;
    QPlainTextEdit *Param1;
    QLabel *DO;

    void setupUi(CBBaseBlock *IfBlock_Canvas)
    {
        if (IfBlock_Canvas->objectName().isEmpty())
            IfBlock_Canvas->setObjectName(QStringLiteral("IfBlock_Canvas"));
        IfBlock_Canvas->resize(400, 32);
        IfBlock_Canvas->setMinimumSize(QSize(180, 32));
        IfBlock_Canvas->setMaximumSize(QSize(400, 32));
        IfBlock_Canvas->setStyleSheet(QStringLiteral("background-color: rgb(181, 89, 255);"));
        horizontalLayout = new QHBoxLayout(IfBlock_Canvas);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(IfBlock_Canvas);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(180, 32));
        widget->setMaximumSize(QSize(400, 32));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(181, 89, 255);"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(8, 4, 8, 4);
        IF = new QLabel(widget);
        IF->setObjectName(QStringLiteral("IF"));
        IF->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(IF);

        Param0 = new QPlainTextEdit(widget);
        Param0->setObjectName(QStringLiteral("Param0"));
        Param0->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Param0->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Param0->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_2->addWidget(Param0);

        DropDown = new QComboBox(widget);
        DropDown->setObjectName(QStringLiteral("DropDown"));
        DropDown->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(DropDown);

        Param1 = new QPlainTextEdit(widget);
        Param1->setObjectName(QStringLiteral("Param1"));
        Param1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Param1->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Param1->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_2->addWidget(Param1);

        DO = new QLabel(widget);
        DO->setObjectName(QStringLiteral("DO"));
        DO->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(DO);


        horizontalLayout->addWidget(widget);


        retranslateUi(IfBlock_Canvas);

        QMetaObject::connectSlotsByName(IfBlock_Canvas);
    } // setupUi

    void retranslateUi(CBBaseBlock *IfBlock_Canvas)
    {
        IfBlock_Canvas->setWindowTitle(QApplication::translate("IfBlock_Canvas", "IfBlock_Canvas", nullptr));
        IF->setText(QApplication::translate("IfBlock_Canvas", "OM:", nullptr));
        DO->setText(QApplication::translate("IfBlock_Canvas", "G\303\226R:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IfBlock_Canvas: public Ui_IfBlock_Canvas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IFBLOCK_CANVAS_H
