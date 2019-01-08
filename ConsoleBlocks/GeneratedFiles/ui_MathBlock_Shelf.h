/********************************************************************************
** Form generated from reading UI file 'MathBlock_Shelf.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATHBLOCK_SHELF_H
#define UI_MATHBLOCK_SHELF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "cbbaseblock.h"

QT_BEGIN_NAMESPACE

class Ui_MathBlock_Shelf
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;

    void setupUi(CBBaseBlock *MathBlock_Shelf)
    {
        if (MathBlock_Shelf->objectName().isEmpty())
            MathBlock_Shelf->setObjectName(QStringLiteral("MathBlock_Shelf"));
        MathBlock_Shelf->resize(400, 32);
        horizontalLayout = new QHBoxLayout(MathBlock_Shelf);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(MathBlock_Shelf);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(255, 127, 15);"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);


        horizontalLayout->addWidget(widget);


        retranslateUi(MathBlock_Shelf);

        QMetaObject::connectSlotsByName(MathBlock_Shelf);
    } // setupUi

    void retranslateUi(CBBaseBlock *MathBlock_Shelf)
    {
        MathBlock_Shelf->setWindowTitle(QApplication::translate("MathBlock_Shelf", "MathBlock_Shelf", nullptr));
        label->setText(QApplication::translate("MathBlock_Shelf", "MATH", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MathBlock_Shelf: public Ui_MathBlock_Shelf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATHBLOCK_SHELF_H
