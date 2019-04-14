/********************************************************************************
** Form generated from reading UI file 'InfoFormDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOFORMDIALOG_H
#define UI_INFOFORMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoFormDialog
{
public:
    QWidget *centralWidget;
    QLineEdit *nameEdit;
    QLineEdit *phoneEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QStatusBar *statusBar;

    void setupUi(QWidget *InfoFormDialog)
    {
        if (InfoFormDialog->objectName().isEmpty())
            InfoFormDialog->setObjectName(QString::fromUtf8("InfoFormDialog"));
        InfoFormDialog->resize(1080, 1920);
        InfoFormDialog->setMinimumSize(QSize(900, 1600));
        InfoFormDialog->setMaximumSize(QSize(1080, 1920));
        InfoFormDialog->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(InfoFormDialog);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setGeometry(QRect(0, 0, 1080, 1920));
        centralWidget->setMinimumSize(QSize(900, 1600));
        centralWidget->setStyleSheet(QString::fromUtf8("#centralWidget {\n"
"border-image: url(:/BDPassPrinter/Resources/inputFormBackGround.jpg);\n"
"}\n"
""));
        nameEdit = new QLineEdit(centralWidget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setGeometry(QRect(445, 676, 470, 100));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font.setPointSize(32);
        nameEdit->setFont(font);
        phoneEdit = new QLineEdit(centralWidget);
        phoneEdit->setObjectName(QString::fromUtf8("phoneEdit"));
        phoneEdit->setGeometry(QRect(445, 872, 470, 100));
        phoneEdit->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(166, 676, 228, 100));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei UI Light"));
        font1.setPointSize(32);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/BDPassPrinter/Resources/step_button.png);\n"
"color: white;\n"
"border-radius:10px"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(166, 872, 228, 100));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/BDPassPrinter/Resources/step_button.png);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:10px"));
        label_2->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(690, 1100, 228, 100));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/BDPassPrinter/Resources/step_button.png);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:10px"));
        statusBar = new QStatusBar(InfoFormDialog);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setGeometry(QRect(0, 0, 3, 22));

        retranslateUi(InfoFormDialog);

        QMetaObject::connectSlotsByName(InfoFormDialog);
    } // setupUi

    void retranslateUi(QWidget *InfoFormDialog)
    {
        label->setText(QApplication::translate("InfoFormDialog", "\345\247\223 \345\220\215", nullptr));
        label_2->setText(QApplication::translate("InfoFormDialog", "\347\224\265 \350\257\235", nullptr));
        pushButton->setText(QApplication::translate("InfoFormDialog", "\347\241\256\350\256\244", nullptr));
        Q_UNUSED(InfoFormDialog);
    } // retranslateUi

};

namespace Ui {
    class InfoFormDialog: public Ui_InfoFormDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOFORMDIALOG_H
