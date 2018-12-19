/********************************************************************************
** Form generated from reading UI file 'PrintBlock_Canvas.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTBLOCK_CANVAS_H
#define UI_PRINTBLOCK_CANVAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <cbbaseblock.h>

QT_BEGIN_NAMESPACE

class Ui_PrintBlock_Canvas
{
public:

    void setupUi(CBBaseBlock *PrintBlock_Canvas)
    {
        if (PrintBlock_Canvas->objectName().isEmpty())
            PrintBlock_Canvas->setObjectName(QStringLiteral("PrintBlock_Canvas"));
        PrintBlock_Canvas->resize(400, 300);

        retranslateUi(PrintBlock_Canvas);

        QMetaObject::connectSlotsByName(PrintBlock_Canvas);
    } // setupUi

    void retranslateUi(CBBaseBlock *PrintBlock_Canvas)
    {
        PrintBlock_Canvas->setWindowTitle(QApplication::translate("PrintBlock_Canvas", "PrintBlock_Canvas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrintBlock_Canvas: public Ui_PrintBlock_Canvas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTBLOCK_CANVAS_H
