/********************************************************************************
** Form generated from reading UI file 'BDPassPrinter.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BDPASSPRINTER_H
#define UI_BDPASSPRINTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BDPassPrinterClass
{
public:
    QWidget *centralWidget;
    QWidget *Mwidget;
    QPushButton *backButton;
    QPushButton *closeButton;

    void setupUi(QMainWindow *BDPassPrinterClass)
    {
        if (BDPassPrinterClass->objectName().isEmpty())
            BDPassPrinterClass->setObjectName(QString::fromUtf8("BDPassPrinterClass"));
        BDPassPrinterClass->resize(1080, 1920);
        BDPassPrinterClass->setMinimumSize(QSize(900, 1600));
        BDPassPrinterClass->setMaximumSize(QSize(1080, 1920));
        centralWidget = new QWidget(BDPassPrinterClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMinimumSize(QSize(900, 1600));
        centralWidget->setMaximumSize(QSize(1080, 1920));
        Mwidget = new QWidget(centralWidget);
        Mwidget->setObjectName(QString::fromUtf8("Mwidget"));
        Mwidget->setGeometry(QRect(0, 0, 1080, 1920));
        Mwidget->setMinimumSize(QSize(900, 1600));
        Mwidget->setMaximumSize(QSize(1080, 1920));
        backButton = new QPushButton(centralWidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(40, 40, 50, 50));
        backButton->setMinimumSize(QSize(50, 50));
        backButton->setMaximumSize(QSize(50, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        backButton->setFont(font);
        backButton->setStyleSheet(QString::fromUtf8("border-image: url(:/BDPassPrinter/Resources/step_button.png);\n"
"color:white;"));
        backButton->setFlat(true);
        closeButton = new QPushButton(centralWidget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(980, 40, 50, 50));
        closeButton->setMinimumSize(QSize(50, 50));
        closeButton->setMaximumSize(QSize(50, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        closeButton->setFont(font1);
        closeButton->setStyleSheet(QString::fromUtf8("border-image: url(:/BDPassPrinter/Resources/step_button.png);\n"
"color:white;"));
        BDPassPrinterClass->setCentralWidget(centralWidget);
        Mwidget->raise();
        closeButton->raise();
        backButton->raise();

        retranslateUi(BDPassPrinterClass);

        QMetaObject::connectSlotsByName(BDPassPrinterClass);
    } // setupUi

    void retranslateUi(QMainWindow *BDPassPrinterClass)
    {
        BDPassPrinterClass->setWindowTitle(QApplication::translate("BDPassPrinterClass", "BDPassPrinter", nullptr));
        backButton->setText(QApplication::translate("BDPassPrinterClass", "<", nullptr));
        closeButton->setText(QApplication::translate("BDPassPrinterClass", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BDPassPrinterClass: public Ui_BDPassPrinterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BDPASSPRINTER_H
