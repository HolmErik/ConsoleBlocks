/********************************************************************************
** Form generated from reading UI file 'CBBaseBlock.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CBBASEBLOCK_H
#define UI_CBBASEBLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CBBaseBlock
{
public:
    QFrame *frame;

    void setupUi(QWidget *CBBaseBlock)
    {
        if (CBBaseBlock->objectName().isEmpty())
            CBBaseBlock->setObjectName(QStringLiteral("CBBaseBlock"));
        CBBaseBlock->resize(456, 283);
        frame = new QFrame(CBBaseBlock);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(110, 90, 191, 41));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        retranslateUi(CBBaseBlock);

        QMetaObject::connectSlotsByName(CBBaseBlock);
    } // setupUi

    void retranslateUi(QWidget *CBBaseBlock)
    {
        CBBaseBlock->setWindowTitle(QApplication::translate("CBBaseBlock", "CBBaseBlock", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CBBaseBlock: public Ui_CBBaseBlock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CBBASEBLOCK_H
