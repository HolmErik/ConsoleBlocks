/********************************************************************************
** Form generated from reading UI file 'Canvas.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANVAS_H
#define UI_CANVAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Canvas
{
public:
    QFrame *frame;

    void setupUi(QWidget *Canvas)
    {
        if (Canvas->objectName().isEmpty())
            Canvas->setObjectName(QStringLiteral("Canvas"));
        Canvas->resize(400, 300);
        frame = new QFrame(Canvas);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 400, 300));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        retranslateUi(Canvas);

        QMetaObject::connectSlotsByName(Canvas);
    } // setupUi

    void retranslateUi(QWidget *Canvas)
    {
        Canvas->setWindowTitle(QApplication::translate("Canvas", "Canvas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Canvas: public Ui_Canvas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANVAS_H
