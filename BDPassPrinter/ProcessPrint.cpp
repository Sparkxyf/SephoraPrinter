#include "ProcessPrint.h"

ProcessPrint::ProcessPrint(QWidget *parent)
	: MDialog(parent)
{
	ui.setupUi(this);
	PrintWork *printWork = new PrintWork();
	workThread = new QThread(this);
	printWork->moveToThread(workThread);
	workThread->start();
	connect(this, &ProcessPrint::startPrint, printWork, &PrintWork::printBordingPass,Qt::QueuedConnection);
	connect(printWork, &PrintWork::nextPage, this, [&]() {emit this->changeDisplayedDialog(0); });
}

ProcessPrint::~ProcessPrint() {
	workThread->requestInterruption();
	workThread->quit();
	QThread::sleep(0);
	workThread->wait();
}

PrintWork::PrintWork() 
	:QObject(Q_NULLPTR) {}

void PrintWork::printBordingPass(QImage pass) {
	QPrinterInfo targetPrinter = QPrinterInfo::defaultPrinter();
	
	QPrinter printer(targetPrinter, QPrinter::PrinterMode::HighResolution);
	
	//QPrintDialog *dialog = new QPrintDialog(&printer);

	
	//if (dialog->exec() != QDialog::Accepted)
	//	return;

	printer.setPaperSize(QSizeF(90, 260), QPrinter::Unit::Millimeter);
	printer.setPageSize(QPageSize(QSizeF(90, 260), QPageSize::Unit::Millimeter));
	printer.setOrientation(QPrinter::Orientation::Landscape);
	printer.setPageOrientation(QPageLayout::Orientation::Landscape);
	printer.setPageMargins(QMarginsF(0.0, 0.0, 0.0, 0.0), QPageLayout::Unit::Millimeter);
	printer.setResolution(300);
	QPainter painter(&printer);
	
	painter.drawImage(0, 0, pass);
	QThread::sleep(3);
	emit nextPage();
}

void ProcessPrint::showEvent(QShowEvent *e)
{
	emit startPrint(boardingPass);
	QWidget::showEvent(e);
}

void ProcessPrint::receivePass(QImage pass_)
{
	boardingPass = std::move(pass_);
}
