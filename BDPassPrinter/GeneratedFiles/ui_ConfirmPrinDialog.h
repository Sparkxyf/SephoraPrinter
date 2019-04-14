/********************************************************************************
** Form generated from reading UI file 'ConfirmPrinDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMPRINDIALOG_H
#define UI_CONFIRMPRINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfirmPrinDialog
{
public:
    QLabel *preview;
    QPushButton *next;

    void setupUi(QWidget *ConfirmPrinDialog)
    {
        if (ConfirmPrinDialog->objectName().isEmpty())
            ConfirmPrinDialog->setObjectName(QString::fromUtf8("ConfirmPrinDialog"));
        ConfirmPrinDialog->resize(1080, 1920);
        preview = new QLabel(ConfirmPrinDialog);
        preview->setObjectName(QString::fromUtf8("preview"));
        preview->setGeometry(QRect(40, 240, 1000, 400));
        next = new QPushButton(ConfirmPrinDialog);
        next->setObjectName(QString::fromUtf8("next"));
        next->setGeometry(QRect(670, 710, 350, 100));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI Light"));
        font.setPointSize(32);
        next->setFont(font);
        next->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.517045, y2:0.488636, stop:0 rgba(121, 121, 121, 255), stop:1 rgba(0, 0, 0, 255));\n"
"color: rgb(255, 255, 255);\n"
"border-radius:10px"));

        retranslateUi(ConfirmPrinDialog);

        QMetaObject::connectSlotsByName(ConfirmPrinDialog);
    } // setupUi

    void retranslateUi(QWidget *ConfirmPrinDialog)
    {
        ConfirmPrinDialog->setWindowTitle(QApplication::translate("ConfirmPrinDialog", "ConfirmPrinDialog", nullptr));
        preview->setText(QString());
        next->setText(QApplication::translate("ConfirmPrinDialog", "\347\241\256\350\256\244 \345\274\200\345\247\213\346\211\223\345\215\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfirmPrinDialog: public Ui_ConfirmPrinDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMPRINDIALOG_H
