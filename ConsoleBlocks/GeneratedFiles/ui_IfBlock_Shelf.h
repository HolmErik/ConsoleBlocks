/********************************************************************************
** Form generated from reading UI file 'IfBlock_Shelf.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IFBLOCK_SHELF_H
#define UI_IFBLOCK_SHELF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "cbbaseblock.h"

QT_BEGIN_NAMESPACE

class Ui_IfBlock_Shelf
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;

    void setupUi(CBBaseBlock *IfBlock_Shelf)
    {
        if (IfBlock_Shelf->objectName().isEmpty())
            IfBlock_Shelf->setObjectName(QStringLiteral("IfBlock_Shelf"));
        IfBlock_Shelf->resize(400, 32);
        IfBlock_Shelf->setMinimumSize(QSize(180, 32));
        IfBlock_Shelf->setMaximumSize(QSize(400, 32));
        horizontalLayout = new QHBoxLayout(IfBlock_Shelf);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(IfBlock_Shelf);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(181, 89, 255);"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);


        horizontalLayout->addWidget(widget);


        retranslateUi(IfBlock_Shelf);

        QMetaObject::connectSlotsByName(IfBlock_Shelf);
    } // setupUi

    void retranslateUi(CBBaseBlock *IfBlock_Shelf)
    {
        IfBlock_Shelf->setWindowTitle(QApplication::translate("IfBlock_Shelf", "IfBlock_Shelf", nullptr));
        label->setText(QApplication::translate("IfBlock_Shelf", "OMSATS!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IfBlock_Shelf: public Ui_IfBlock_Shelf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IFBLOCK_SHELF_H
