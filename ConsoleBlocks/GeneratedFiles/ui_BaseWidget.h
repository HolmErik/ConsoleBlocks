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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BaseWidget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QCheckBox *checkBox;
    QDialogButtonBox *buttonBox;
    QCommandLinkButton *commandLinkButton;
    QDial *dial;

    void setupUi(QWidget *BaseWidget)
    {
        if (BaseWidget->objectName().isEmpty())
            BaseWidget->setObjectName(QStringLiteral("BaseWidget"));
        BaseWidget->resize(252, 169);
        BaseWidget->setMinimumSize(QSize(252, 169));
        BaseWidget->setMaximumSize(QSize(252, 169));
        pushButton = new QPushButton(BaseWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 50, 75, 23));
        pushButton_2 = new QPushButton(BaseWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 100, 75, 23));
        checkBox = new QCheckBox(BaseWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(30, 30, 70, 18));
        buttonBox = new QDialogButtonBox(BaseWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(40, 70, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        commandLinkButton = new QCommandLinkButton(BaseWidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(30, 120, 186, 41));
        dial = new QDial(BaseWidget);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(50, 70, 50, 64));

        retranslateUi(BaseWidget);

        QMetaObject::connectSlotsByName(BaseWidget);
    } // setupUi

    void retranslateUi(QWidget *BaseWidget)
    {
        BaseWidget->setWindowTitle(QApplication::translate("BaseWidget", "BaseWidget", nullptr));
        pushButton->setText(QApplication::translate("BaseWidget", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("BaseWidget", "PushButton", nullptr));
        checkBox->setText(QApplication::translate("BaseWidget", "CheckBox", nullptr));
        commandLinkButton->setText(QApplication::translate("BaseWidget", "CommandLinkButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BaseWidget: public Ui_BaseWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASEWIDGET_H
