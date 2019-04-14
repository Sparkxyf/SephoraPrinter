#pragma once

#include <QWidget>
#include <qstring.h>
#include <QThread>
#include <QPainter>
#include <QPrintPreviewDialog>
//#include <QtPrintSupport/qtprintsupportglobal.h>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrinterInfo>
#include <QtPrintSupport/QPrintDialog>
#include "ui_ProcessPrint.h"
#include "StackedDialog.h"

class PrintWork : public QObject {
	Q_OBJECT
public:
	PrintWork();
public slots:
	void printBordingPass(QImage);
signals:
	void printJobFinished();
	void nextPage();
};

class ProcessPrint : public MDialog
{
	Q_OBJECT

public:
	ProcessPrint(QWidget *parent = Q_NULLPTR);
	~ProcessPrint();

private:
	QThread *workThread;
	QImage boardingPass;
	Ui::ProcessPrint ui;
	void showEvent(QShowEvent*)override;
signals:
	void startPrint(QImage);
public slots:
	void receivePass(QImage);
};
