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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CBBaseBlock
{
public:
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QFrame *box;
    QHBoxLayout *horizontalLayout;

    void setupUi(QWidget *CBBaseBlock)
    {
        if (CBBaseBlock->objectName().isEmpty())
            CBBaseBlock->setObjectName(QStringLiteral("CBBaseBlock"));
        CBBaseBlock->resize(400, 32);
        CBBaseBlock->setMinimumSize(QSize(180, 32));
        CBBaseBlock->setMaximumSize(QSize(400, 32));
        horizontalLayout_2 = new QHBoxLayout(CBBaseBlock);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 2, 0, 0);
        frame = new QFrame(CBBaseBlock);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QLatin1String("\n"
"background-color: rgb(131, 0, 0);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(2, 2, 0, 0);
        box = new QFrame(frame);
        box->setObjectName(QStringLiteral("box"));
        box->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        box->setFrameShape(QFrame::StyledPanel);
        box->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(box);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);

        verticalLayout_3->addWidget(box);


        horizontalLayout_2->addWidget(frame);


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
