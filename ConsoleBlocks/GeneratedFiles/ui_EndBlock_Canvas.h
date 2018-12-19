/********************************************************************************
** Form generated from reading UI file 'EndBlock_Canvas.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENDBLOCK_CANVAS_H
#define UI_ENDBLOCK_CANVAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cbbaseblock.h"

QT_BEGIN_NAMESPACE

class Ui_EndBlock_Canvas
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;

    void setupUi(CBBaseBlock *EndBlock_Canvas)
    {
        if (EndBlock_Canvas->objectName().isEmpty())
            EndBlock_Canvas->setObjectName(QStringLiteral("EndBlock_Canvas"));
        EndBlock_Canvas->resize(400, 32);
        verticalLayout = new QVBoxLayout(EndBlock_Canvas);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(EndBlock_Canvas);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(255, 151, 205);"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);


        verticalLayout->addWidget(widget);


        retranslateUi(EndBlock_Canvas);

        QMetaObject::connectSlotsByName(EndBlock_Canvas);
    } // setupUi

    void retranslateUi(CBBaseBlock *EndBlock_Canvas)
    {
        EndBlock_Canvas->setWindowTitle(QApplication::translate("EndBlock_Canvas", "EndBlock_Canvas", nullptr));
        label->setText(QApplication::translate("EndBlock_Canvas", "ST\303\204NG OM }", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EndBlock_Canvas: public Ui_EndBlock_Canvas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENDBLOCK_CANVAS_H
