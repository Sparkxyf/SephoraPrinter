#pragma once

#include <QtWidgets/QMainWindow>
#include <qstackedlayout.h>
#include <QPainter>
#include <QDateTime>
#include "ui_BDPassPrinter.h"
#include "StartPage.h"
#include "InfoFormDialog.h"
#include "ChooseFlightDialog.h"
#include "ProcessPrint.h"
#include "ConfirmPrinDialog.h"

class BDPassPrinter : public QMainWindow
{
	Q_OBJECT

public:
	BDPassPrinter(QWidget *parent = Q_NULLPTR);

private:
	Ui::BDPassPrinterClass ui;
	StartPage* startPage;
	QStackedLayout* subWidgets;
	InfoFormDialog* infoFormDialog;
	ChooseFlightDialog* chooseFlightDialog;
	//ConfirmPrinDialog* confirmPrinDialog;
	ProcessPrint* processPrint;
private slots:
	void generateBoardingPass();
	void back();
signals:
	void finishGenerateBoardingPass(QImage);
};
