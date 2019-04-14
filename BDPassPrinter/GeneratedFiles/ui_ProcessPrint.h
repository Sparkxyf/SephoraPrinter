/********************************************************************************
** Form generated from reading UI file 'ProcessPrint.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSPRINT_H
#define UI_PROCESSPRINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProcessPrint
{
public:
    QWidget *centralWidget;

    void setupUi(QWidget *ProcessPrint)
    {
        if (ProcessPrint->objectName().isEmpty())
            ProcessPrint->setObjectName(QString::fromUtf8("ProcessPrint"));
        ProcessPrint->resize(1080, 1880);
        centralWidget = new QWidget(ProcessPrint);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setGeometry(QRect(0, 0, 1080, 1920));
        centralWidget->setMinimumSize(QSize(1080, 1920));
        centralWidget->setStyleSheet(QString::fromUtf8("#centralWidget {\n"
"border-image:url(:/BDPassPrinter/Resources/welcomePage.jpg);\n"
"}\n"
""));

        retranslateUi(ProcessPrint);

        QMetaObject::connectSlotsByName(ProcessPrint);
    } // setupUi

    void retranslateUi(QWidget *ProcessPrint)
    {
        ProcessPrint->setWindowTitle(QApplication::translate("ProcessPrint", "ProcessPrint", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProcessPrint: public Ui_ProcessPrint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSPRINT_H
