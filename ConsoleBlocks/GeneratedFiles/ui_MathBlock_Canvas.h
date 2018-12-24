/********************************************************************************
** Form generated from reading UI file 'MathBlock_Canvas.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATHBLOCK_CANVAS_H
#define UI_MATHBLOCK_CANVAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>
#include "cbbaseblock.h"

QT_BEGIN_NAMESPACE

class Ui_MathBlock_Canvas
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *InParam0;
    QLabel *label;
    QPlainTextEdit *InParam1;
    QComboBox *DropDown;
    QPlainTextEdit *InParam2;

    void setupUi(CBBaseBlock *MathBlock_Canvas)
    {
        if (MathBlock_Canvas->objectName().isEmpty())
            MathBlock_Canvas->setObjectName(QStringLiteral("MathBlock_Canvas"));
        MathBlock_Canvas->resize(400, 32);
        horizontalLayout = new QHBoxLayout(MathBlock_Canvas);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(MathBlock_Canvas);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(255, 127, 15);"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(8, 4, 8, 4);
        InParam0 = new QPlainTextEdit(widget);
        InParam0->setObjectName(QStringLiteral("InParam0"));
        InParam0->setMaximumSize(QSize(16777215, 24));
        InParam0->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        InParam0->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        InParam0->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_2->addWidget(InParam0);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        InParam1 = new QPlainTextEdit(widget);
        InParam1->setObjectName(QStringLiteral("InParam1"));
        InParam1->setMaximumSize(QSize(16777215, 24));
        InParam1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        InParam1->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        InParam1->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_2->addWidget(InParam1);

        DropDown = new QComboBox(widget);
        DropDown->setObjectName(QStringLiteral("DropDown"));
        DropDown->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(DropDown);

        InParam2 = new QPlainTextEdit(widget);
        InParam2->setObjectName(QStringLiteral("InParam2"));
        InParam2->setMaximumSize(QSize(16777215, 24));
        InParam2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        InParam2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        InParam2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_2->addWidget(InParam2);


        horizontalLayout->addWidget(widget);


        retranslateUi(MathBlock_Canvas);

        QMetaObject::connectSlotsByName(MathBlock_Canvas);
    } // setupUi

    void retranslateUi(CBBaseBlock *MathBlock_Canvas)
    {
        MathBlock_Canvas->setWindowTitle(QApplication::translate("MathBlock_Canvas", "MathBlock_Canvas", nullptr));
        label->setText(QApplication::translate("MathBlock_Canvas", "\303\204r Lika Med", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MathBlock_Canvas: public Ui_MathBlock_Canvas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATHBLOCK_CANVAS_H
