/********************************************************************************
** Form generated from reading UI file 'ConsoleWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLEWIDGET_H
#define UI_CONSOLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConsoleWidget
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QLabel *CL;

    void setupUi(QWidget *ConsoleWidget)
    {
        if (ConsoleWidget->objectName().isEmpty())
            ConsoleWidget->setObjectName(QStringLiteral("ConsoleWidget"));
        ConsoleWidget->resize(555, 200);
        ConsoleWidget->setMaximumSize(QSize(16777215, 200));
        verticalLayout = new QVBoxLayout(ConsoleWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(ConsoleWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 553, 198));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        CL = new QLabel(scrollAreaWidgetContents);
        CL->setObjectName(QStringLiteral("CL"));
        CL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout->addWidget(CL);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(ConsoleWidget);

        QMetaObject::connectSlotsByName(ConsoleWidget);
    } // setupUi

    void retranslateUi(QWidget *ConsoleWidget)
    {
        ConsoleWidget->setWindowTitle(QApplication::translate("ConsoleWidget", "ConsoleWidget", nullptr));
        CL->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ConsoleWidget: public Ui_ConsoleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLEWIDGET_H
