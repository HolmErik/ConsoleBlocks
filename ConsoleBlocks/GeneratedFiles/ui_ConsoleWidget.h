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
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConsoleWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *console;
    QScrollBar *verticalScrollBar;

    void setupUi(QWidget *ConsoleWidget)
    {
        if (ConsoleWidget->objectName().isEmpty())
            ConsoleWidget->setObjectName(QStringLiteral("ConsoleWidget"));
        ConsoleWidget->resize(454, 200);
        ConsoleWidget->setMaximumSize(QSize(16777215, 200));
        horizontalLayout = new QHBoxLayout(ConsoleWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        console = new QLabel(ConsoleWidget);
        console->setObjectName(QStringLiteral("console"));
        console->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout->addWidget(console);

        verticalScrollBar = new QScrollBar(ConsoleWidget);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalScrollBar);


        retranslateUi(ConsoleWidget);

        QMetaObject::connectSlotsByName(ConsoleWidget);
    } // setupUi

    void retranslateUi(QWidget *ConsoleWidget)
    {
        ConsoleWidget->setWindowTitle(QApplication::translate("ConsoleWidget", "ConsoleWidget", nullptr));
        console->setText(QApplication::translate("ConsoleWidget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConsoleWidget: public Ui_ConsoleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLEWIDGET_H
