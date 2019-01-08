/********************************************************************************
** Form generated from reading UI file 'CBStartBlock.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CBSTARTBLOCK_H
#define UI_CBSTARTBLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "cbbaseblock.h"

QT_BEGIN_NAMESPACE

class Ui_CBStartBlock
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;

    void setupUi(CBBaseBlock *CBStartBlock)
    {
        if (CBStartBlock->objectName().isEmpty())
            CBStartBlock->setObjectName(QStringLiteral("CBStartBlock"));
        CBStartBlock->resize(400, 32);
        CBStartBlock->setMinimumSize(QSize(400, 32));
        CBStartBlock->setMaximumSize(QSize(400, 32));
        CBStartBlock->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(CBStartBlock);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        widget = new QWidget(CBStartBlock);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 98);"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);


        horizontalLayout->addWidget(widget);


        retranslateUi(CBStartBlock);

        QMetaObject::connectSlotsByName(CBStartBlock);
    } // setupUi

    void retranslateUi(CBBaseBlock *CBStartBlock)
    {
        CBStartBlock->setWindowTitle(QApplication::translate("CBStartBlock", "CBStartBlock", nullptr));
        label->setText(QApplication::translate("CBStartBlock", "START", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CBStartBlock: public Ui_CBStartBlock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CBSTARTBLOCK_H
