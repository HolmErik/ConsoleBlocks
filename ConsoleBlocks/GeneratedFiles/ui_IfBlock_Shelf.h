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
#include <cbbaseblock.h>

QT_BEGIN_NAMESPACE

class Ui_IfBlock_Shelf
{
public:

    void setupUi(CBBaseBlock *IfBlock_Shelf)
    {
        if (IfBlock_Shelf->objectName().isEmpty())
            IfBlock_Shelf->setObjectName(QStringLiteral("IfBlock_Shelf"));
        IfBlock_Shelf->resize(400, 300);

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
