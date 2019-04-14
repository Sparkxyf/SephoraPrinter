/********************************************************************************
** Form generated from reading UI file 'ChooseFlightDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEFLIGHTDIALOG_H
#define UI_CHOOSEFLIGHTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseFlightDialog
{
public:
    QPushButton *dest0;
    QPushButton *dest1;
    QPushButton *dest2;
    QPushButton *dest4;
    QPushButton *dest3;
    QWidget *centralWidget;
    QWidget *widget0;
    QWidget *widget1;
    QWidget *widget2;
    QWidget *widget3;
    QWidget *widget4;
    QWidget *widget;

    void setupUi(QWidget *ChooseFlightDialog)
    {
        if (ChooseFlightDialog->objectName().isEmpty())
            ChooseFlightDialog->setObjectName(QString::fromUtf8("ChooseFlightDialog"));
        ChooseFlightDialog->resize(1080, 1920);
        dest0 = new QPushButton(ChooseFlightDialog);
        dest0->setObjectName(QString::fromUtf8("dest0"));
        dest0->setGeometry(QRect(628, 132, 342, 478));
        dest0->setMinimumSize(QSize(0, 0));
        dest0->setStyleSheet(QString::fromUtf8("background: transparent;"));
        dest0->setFlat(true);
        dest1 = new QPushButton(ChooseFlightDialog);
        dest1->setObjectName(QString::fromUtf8("dest1"));
        dest1->setGeometry(QRect(58, 322, 381, 541));
        dest1->setMinimumSize(QSize(0, 0));
        dest1->setStyleSheet(QString::fromUtf8("background: transparent;"));
        dest1->setFlat(true);
        dest2 = new QPushButton(ChooseFlightDialog);
        dest2->setObjectName(QString::fromUtf8("dest2"));
        dest2->setGeometry(QRect(677, 721, 351, 480));
        dest2->setMinimumSize(QSize(0, 0));
        dest2->setStyleSheet(QString::fromUtf8("background: transparent;"));
        dest2->setFlat(true);
        dest4 = new QPushButton(ChooseFlightDialog);
        dest4->setObjectName(QString::fromUtf8("dest4"));
        dest4->setGeometry(QRect(535, 1293, 341, 341));
        dest4->setMinimumSize(QSize(0, 0));
        dest4->setStyleSheet(QString::fromUtf8("background: transparent;"));
        dest4->setFlat(true);
        dest3 = new QPushButton(ChooseFlightDialog);
        dest3->setObjectName(QString::fromUtf8("dest3"));
        dest3->setGeometry(QRect(58, 1115, 345, 351));
        dest3->setMinimumSize(QSize(0, 0));
        dest3->setStyleSheet(QString::fromUtf8("background: transparent;"));
        dest3->setFlat(true);
        centralWidget = new QWidget(ChooseFlightDialog);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setGeometry(QRect(0, 0, 1080, 1920));
        centralWidget->setStyleSheet(QString::fromUtf8("#centralWidget{border-image: url(:/BDPassPrinter/Resources/\350\203\214\346\231\257\345\233\276.png);}\n"
""));
        widget0 = new QWidget(ChooseFlightDialog);
        widget0->setObjectName(QString::fromUtf8("widget0"));
        widget0->setGeometry(QRect(629, 133, 342, 479));
        widget0->setStyleSheet(QString::fromUtf8("border-image: url(:/BDPassPrinter/Resources/d0.png);"));
        widget1 = new QWidget(ChooseFlightDialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(60, 321, 390, 545));
        widget1->setStyleSheet(QString::fromUtf8("border-image: url(:/BDPassPrinter/Resources/d1.png);"));
        widget2 = new QWidget(ChooseFlightDialog);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(683, 721, 343, 479));
        widget2->setStyleSheet(QString::fromUtf8("border-image: url(:/BDPassPrinter/Resources/d2.png);"));
        widget3 = new QWidget(ChooseFlightDialog);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(58, 1115, 342, 341));
        widget3->setStyleSheet(QString::fromUtf8("border-image: url(:/BDPassPrinter/Resources/d3.png);"));
        widget4 = new QWidget(ChooseFlightDialog);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(537, 1293, 342, 342));
        widget4->setStyleSheet(QString::fromUtf8("border-image: url(:/BDPassPrinter/Resources/d4.png);"));
        widget = new QWidget(ChooseFlightDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 1080, 1920));
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/BDPassPrinter/Resources/\344\270\212\345\261\202.png);"));
        centralWidget->raise();
        widget0->raise();
        widget1->raise();
        widget2->raise();
        widget3->raise();
        widget4->raise();
        widget->raise();
        dest2->raise();
        dest3->raise();
        dest1->raise();
        dest0->raise();
        dest4->raise();

        retranslateUi(ChooseFlightDialog);

        dest0->setDefault(false);


        QMetaObject::connectSlotsByName(ChooseFlightDialog);
    } // setupUi

    void retranslateUi(QWidget *ChooseFlightDialog)
    {
        ChooseFlightDialog->setWindowTitle(QApplication::translate("ChooseFlightDialog", "ChooseFlightDialog", nullptr));
        dest0->setText(QString());
        dest1->setText(QString());
        dest2->setText(QString());
        dest4->setText(QString());
        dest3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChooseFlightDialog: public Ui_ChooseFlightDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEFLIGHTDIALOG_H
