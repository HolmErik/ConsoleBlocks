/********************************************************************************
** Form generated from reading UI file 'VariableBlock_Shelf.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VARIABLEBLOCK_SHELF_H
#define UI_VARIABLEBLOCK_SHELF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "cbbaseblock.h"

QT_BEGIN_NAMESPACE

class Ui_VariableBlock_Shelf
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;

    void setupUi(CBBaseBlock *VariableBlock_Shelf)
    {
        if (VariableBlock_Shelf->objectName().isEmpty())
            VariableBlock_Shelf->setObjectName(QStringLiteral("VariableBlock_Shelf"));
        VariableBlock_Shelf->resize(400, 32);
        horizontalLayout = new QHBoxLayout(VariableBlock_Shelf);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(VariableBlock_Shelf);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);


        horizontalLayout->addWidget(widget);


        retranslateUi(VariableBlock_Shelf);

        QMetaObject::connectSlotsByName(VariableBlock_Shelf);
    } // setupUi

    void retranslateUi(CBBaseBlock *VariableBlock_Shelf)
    {
        VariableBlock_Shelf->setWindowTitle(QApplication::translate("VariableBlock_Shelf", "VariableBlock_Shelf", nullptr));
        label->setText(QApplication::translate("VariableBlock_Shelf", "VARIABEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VariableBlock_Shelf: public Ui_VariableBlock_Shelf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VARIABLEBLOCK_SHELF_H
