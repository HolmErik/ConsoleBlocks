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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CBBaseBlock
{
public:
    QWidget *widget;

    void setupUi(QWidget *CBBaseBlock)
    {
        if (CBBaseBlock->objectName().isEmpty())
            CBBaseBlock->setObjectName(QStringLiteral("CBBaseBlock"));
        CBBaseBlock->resize(400, 32);
        CBBaseBlock->setMinimumSize(QSize(180, 32));
        CBBaseBlock->setMaximumSize(QSize(400, 32));
        CBBaseBlock->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        widget = new QWidget(CBBaseBlock);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 400, 32));

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
