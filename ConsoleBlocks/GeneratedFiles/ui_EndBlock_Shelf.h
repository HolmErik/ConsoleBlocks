/********************************************************************************
** Form generated from reading UI file 'EndBlock_Shelf.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENDBLOCK_SHELF_H
#define UI_ENDBLOCK_SHELF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cbbaseblock.h"

QT_BEGIN_NAMESPACE

class Ui_EndBlock_Shelf
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;

    void setupUi(CBBaseBlock *EndBlock_Shelf)
    {
        if (EndBlock_Shelf->objectName().isEmpty())
            EndBlock_Shelf->setObjectName(QStringLiteral("EndBlock_Shelf"));
        EndBlock_Shelf->resize(400, 32);
        verticalLayout = new QVBoxLayout(EndBlock_Shelf);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(EndBlock_Shelf);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(255, 151, 205);"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);


        verticalLayout->addWidget(widget);


        retranslateUi(EndBlock_Shelf);

        QMetaObject::connectSlotsByName(EndBlock_Shelf);
    } // setupUi

    void retranslateUi(CBBaseBlock *EndBlock_Shelf)
    {
        EndBlock_Shelf->setWindowTitle(QApplication::translate("EndBlock_Shelf", "EndBlock_Shelf", nullptr));
        label->setText(QApplication::translate("EndBlock_Shelf", "ST\303\204NG OM }", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EndBlock_Shelf: public Ui_EndBlock_Shelf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENDBLOCK_SHELF_H
