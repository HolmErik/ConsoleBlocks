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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CBBaseBlock
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QFrame *box;

    void setupUi(QWidget *CBBaseBlock)
    {
        if (CBBaseBlock->objectName().isEmpty())
            CBBaseBlock->setObjectName(QStringLiteral("CBBaseBlock"));
        CBBaseBlock->resize(223, 67);
        verticalLayout_2 = new QVBoxLayout(CBBaseBlock);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(CBBaseBlock);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        box = new QFrame(frame);
        box->setObjectName(QStringLiteral("box"));
        box->setFrameShape(QFrame::StyledPanel);
        box->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(box);


        verticalLayout_2->addWidget(frame);


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
