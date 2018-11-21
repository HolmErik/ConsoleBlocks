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
#include <QtWidgets/QLabel>
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
    QLabel *label;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;

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
        label = new QLabel(box);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(80, 16777215));
        QFont font;
        font.setFamily(QStringLiteral("Bahnschrift SemiLight Condensed"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        frame_3 = new QFrame(box);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(16777215, 16777215));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);


        horizontalLayout->addWidget(frame_3);

        frame_4 = new QFrame(box);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_4);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(frame_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setFamily(QStringLiteral("Bahnschrift SemiLight Condensed"));
        font1.setPointSize(21);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_2);


        horizontalLayout->addWidget(frame_4);

        frame_2 = new QFrame(box);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_2);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(16777215, 16777215));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_4);


        horizontalLayout->addWidget(frame_2);


        verticalLayout_3->addWidget(box);


        horizontalLayout_2->addWidget(frame);


        retranslateUi(CBBaseBlock);

        QMetaObject::connectSlotsByName(CBBaseBlock);
    } // setupUi

    void retranslateUi(QWidget *CBBaseBlock)
    {
        CBBaseBlock->setWindowTitle(QApplication::translate("CBBaseBlock", "CBBaseBlock", nullptr));
        label->setText(QApplication::translate("CBBaseBlock", "IF:", nullptr));
        label_3->setText(QApplication::translate("CBBaseBlock", "167", nullptr));
        label_2->setText(QApplication::translate("CBBaseBlock", "==", nullptr));
        label_4->setText(QApplication::translate("CBBaseBlock", "168", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CBBaseBlock: public Ui_CBBaseBlock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CBBASEBLOCK_H
