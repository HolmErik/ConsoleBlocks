/********************************************************************************
** Form generated from reading UI file 'PrintBlock_Shelf.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTBLOCK_SHELF_H
#define UI_PRINTBLOCK_SHELF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cbbaseblock.h"

QT_BEGIN_NAMESPACE

class Ui_PrintBlock_Shelf
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;

    void setupUi(CBBaseBlock *PrintBlock_Shelf)
    {
        if (PrintBlock_Shelf->objectName().isEmpty())
            PrintBlock_Shelf->setObjectName(QStringLiteral("PrintBlock_Shelf"));
        PrintBlock_Shelf->resize(400, 32);
        verticalLayout = new QVBoxLayout(PrintBlock_Shelf);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(PrintBlock_Shelf);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(78, 255, 51);"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);


        verticalLayout->addWidget(widget);


        retranslateUi(PrintBlock_Shelf);

        QMetaObject::connectSlotsByName(PrintBlock_Shelf);
    } // setupUi

    void retranslateUi(CBBaseBlock *PrintBlock_Shelf)
    {
        PrintBlock_Shelf->setWindowTitle(QApplication::translate("PrintBlock_Shelf", "PrintBlock_Shelf", nullptr));
        label->setText(QApplication::translate("PrintBlock_Shelf", "PRINT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrintBlock_Shelf: public Ui_PrintBlock_Shelf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTBLOCK_SHELF_H
