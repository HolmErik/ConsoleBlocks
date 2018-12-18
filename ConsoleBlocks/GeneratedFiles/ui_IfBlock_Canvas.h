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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>
#include "CBBaseBlock.h"

QT_BEGIN_NAMESPACE

class Ui_IfBlock_Canvas
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;

    void setupUi(CBBaseBlock *IfBlock_Canvas)
    {
        if (IfBlock_Canvas->objectName().isEmpty())
            IfBlock_Canvas->setObjectName(QStringLiteral("IfBlock_Canvas"));
        IfBlock_Canvas->resize(400, 32);
        IfBlock_Canvas->setMinimumSize(QSize(180, 32));
        IfBlock_Canvas->setMaximumSize(QSize(400, 32));
        horizontalLayout = new QHBoxLayout(IfBlock_Canvas);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(IfBlock_Canvas);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(180, 32));
        widget->setMaximumSize(QSize(400, 32));
        widget->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));"));

        horizontalLayout->addWidget(widget);


        retranslateUi(IfBlock_Canvas);

        QMetaObject::connectSlotsByName(IfBlock_Canvas);
    } // setupUi

    void retranslateUi(CBBaseBlock *IfBlock_Canvas)
    {
        IfBlock_Canvas->setWindowTitle(QApplication::translate("IfBlock_Canvas", "IfBlock_Canvas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IfBlock_Canvas: public Ui_IfBlock_Canvas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IFBLOCK_CANVAS_H
