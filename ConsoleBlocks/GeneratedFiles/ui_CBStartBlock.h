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
#include "CBBaseBlock.h"

QT_BEGIN_NAMESPACE

class Ui_CBStartBlock
{
public:

    void setupUi(CBBaseBlock *CBStartBlock)
    {
        if (CBStartBlock->objectName().isEmpty())
            CBStartBlock->setObjectName(QStringLiteral("CBStartBlock"));
        CBStartBlock->resize(376, 90);

        retranslateUi(CBStartBlock);

        QMetaObject::connectSlotsByName(CBStartBlock);
    } // setupUi

    void retranslateUi(CBBaseBlock *CBStartBlock)
    {
        CBStartBlock->setWindowTitle(QApplication::translate("CBStartBlock", "CBStartBlock", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CBStartBlock: public Ui_CBStartBlock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CBSTARTBLOCK_H
