/********************************************************************************
** Form generated from reading UI file 'StartPage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTPAGE_H
#define UI_STARTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartPage
{
public:
    QPushButton *nextButton;
    QWidget *centralWidget;

    void setupUi(QWidget *StartPage)
    {
        if (StartPage->objectName().isEmpty())
            StartPage->setObjectName(QString::fromUtf8("StartPage"));
        StartPage->resize(1080, 1920);
        StartPage->setStyleSheet(QString::fromUtf8(""));
        nextButton = new QPushButton(StartPage);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(320, 778, 443, 123));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI Light"));
        font.setPointSize(32);
        nextButton->setFont(font);
        nextButton->setStyleSheet(QString::fromUtf8("border-image: url(:/BDPassPrinter/Resources/step_button.png);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:10px"));
        centralWidget = new QWidget(StartPage);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setGeometry(QRect(0, 0, 1080, 1920));
        centralWidget->setStyleSheet(QString::fromUtf8("#centralWidget {\n"
"border-image: url(:/BDPassPrinter/Resources/welcomNotext.jpg);\n"
"}\n"
""));
        centralWidget->raise();
        nextButton->raise();

        retranslateUi(StartPage);

        QMetaObject::connectSlotsByName(StartPage);
    } // setupUi

    void retranslateUi(QWidget *StartPage)
    {
        StartPage->setWindowTitle(QApplication::translate("StartPage", "StartPage", nullptr));
        nextButton->setText(QApplication::translate("StartPage", "\346\227\205 \345\256\242 \351\252\214 \350\257\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartPage: public Ui_StartPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTPAGE_H
