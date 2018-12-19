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
#include <cbbaseblock.h>

QT_BEGIN_NAMESPACE

class Ui_PrintBlock_Shelf
{
public:

    void setupUi(CBBaseBlock *PrintBlock_Shelf)
    {
        if (PrintBlock_Shelf->objectName().isEmpty())
            PrintBlock_Shelf->setObjectName(QStringLiteral("PrintBlock_Shelf"));
        PrintBlock_Shelf->resize(400, 300);

        retranslateUi(PrintBlock_Shelf);

        QMetaObject::connectSlotsByName(PrintBlock_Shelf);
    } // setupUi

    void retranslateUi(CBBaseBlock *PrintBlock_Shelf)
    {
        PrintBlock_Shelf->setWindowTitle(QApplication::translate("PrintBlock_Shelf", "PrintBlock_Shelf", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrintBlock_Shelf: public Ui_PrintBlock_Shelf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTBLOCK_SHELF_H
