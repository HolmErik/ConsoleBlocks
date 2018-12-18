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
#include <cbbaseblock.h>

QT_BEGIN_NAMESPACE

class Ui_IfBlock_Canvas
{
public:

    void setupUi(CBBaseBlock *IfBlock_Canvas)
    {
        if (IfBlock_Canvas->objectName().isEmpty())
            IfBlock_Canvas->setObjectName(QStringLiteral("IfBlock_Canvas"));
        IfBlock_Canvas->resize(400, 300);

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
