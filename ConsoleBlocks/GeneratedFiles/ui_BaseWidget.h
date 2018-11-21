/********************************************************************************
** Form generated from reading UI file 'BaseWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASEWIDGET_H
#define UI_BASEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BaseWidget
{
public:

    void setupUi(QWidget *BaseWidget)
    {
        if (BaseWidget->objectName().isEmpty())
            BaseWidget->setObjectName(QStringLiteral("BaseWidget"));
        BaseWidget->resize(400, 300);

        retranslateUi(BaseWidget);

        QMetaObject::connectSlotsByName(BaseWidget);
    } // setupUi

    void retranslateUi(QWidget *BaseWidget)
    {
        BaseWidget->setWindowTitle(QApplication::translate("BaseWidget", "BaseWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BaseWidget: public Ui_BaseWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASEWIDGET_H
