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
#include <QtWidgets/QWidget>
#include "CBBaseBlock.h"

QT_BEGIN_NAMESPACE

class Ui_IfBlock_Shelf
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;

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
        widget->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));"));

        horizontalLayout->addWidget(widget);


        retranslateUi(IfBlock_Shelf);

        QMetaObject::connectSlotsByName(IfBlock_Shelf);
    } // setupUi

    void retranslateUi(CBBaseBlock *IfBlock_Shelf)
    {
        IfBlock_Shelf->setWindowTitle(QApplication::translate("IfBlock_Shelf", "IfBlock_Shelf", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IfBlock_Shelf: public Ui_IfBlock_Shelf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IFBLOCK_SHELF_H
