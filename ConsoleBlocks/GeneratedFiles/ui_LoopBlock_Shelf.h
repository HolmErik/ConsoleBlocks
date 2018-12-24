/********************************************************************************
** Form generated from reading UI file 'LoopBlock_Shelf.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOOPBLOCK_SHELF_H
#define UI_LOOPBLOCK_SHELF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cbbaseblock.h"

QT_BEGIN_NAMESPACE

class Ui_LoopBlock_Shelf
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(CBBaseBlock *LoopBlock_Shelf)
    {
        if (LoopBlock_Shelf->objectName().isEmpty())
            LoopBlock_Shelf->setObjectName(QStringLiteral("LoopBlock_Shelf"));
        LoopBlock_Shelf->resize(400, 32);
        horizontalLayout = new QHBoxLayout(LoopBlock_Shelf);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(LoopBlock_Shelf);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(255, 28, 202);"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        horizontalLayout->addWidget(widget);


        retranslateUi(LoopBlock_Shelf);

        QMetaObject::connectSlotsByName(LoopBlock_Shelf);
    } // setupUi

    void retranslateUi(CBBaseBlock *LoopBlock_Shelf)
    {
        LoopBlock_Shelf->setWindowTitle(QApplication::translate("LoopBlock_Shelf", "LoopBlock_Shelf", nullptr));
        label->setText(QApplication::translate("LoopBlock_Shelf", "LOOPHELVETE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoopBlock_Shelf: public Ui_LoopBlock_Shelf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOOPBLOCK_SHELF_H
