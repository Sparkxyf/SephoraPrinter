#include "BDPassPrinter.h"

BDPassPrinter::BDPassPrinter(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	connect(ui.backButton, &QPushButton::clicked, this, &BDPassPrinter::back);
	connect(ui.closeButton, &QPushButton::clicked, QApplication::exit);

	this->setWindowState(Qt::WindowFullScreen);
	subWidgets = new QStackedLayout(ui.Mwidget);
	startPage = new StartPage(this);
	infoFormDialog = new InfoFormDialog(this);
	chooseFlightDialog = new ChooseFlightDialog(this);
	//confirmPrinDialog = new ConfirmPrinDialog(this);
	processPrint = new ProcessPrint(this);

	

	startPage->setIndex(subWidgets->addWidget(startPage));
	infoFormDialog->setIndex(subWidgets->addWidget(infoFormDialog));
	chooseFlightDialog->setIndex(subWidgets->addWidget(chooseFlightDialog));
	//confirmPrinDialog->setIndex(subWidgets->addWidget(confirmPrinDialog));
	processPrint->setIndex(subWidgets->addWidget(processPrint));
	

	connect(startPage, &StartPage::changeDisplayedDialog, subWidgets, &QStackedLayout::setCurrentIndex);
	connect(infoFormDialog, &InfoFormDialog::changeDisplayedDialog, subWidgets, &QStackedLayout::setCurrentIndex);
	connect(chooseFlightDialog, &ChooseFlightDialog::changeDisplayedDialog, subWidgets, &QStackedLayout::setCurrentIndex);
	//connect(confirmPrinDialog, &ConfirmPrinDialog::changeDisplayedDialog, subWidgets, &QStackedLayout::setCurrentIndex);
	connect(processPrint, &ProcessPrint::changeDisplayedDialog, subWidgets, &QStackedLayout::setCurrentIndex);

	
	//connect(confirmPrinDialog, &ConfirmPrinDialog::generatePass, this, &BDPassPrinter::generateBoardingPass);
	connect(chooseFlightDialog, &ChooseFlightDialog::generatePass, this, &BDPassPrinter::generateBoardingPass);
	//connect(this, &BDPassPrinter::finishGenerateBoardingPass, confirmPrinDialog, &ConfirmPrinDialog::setPreview);
	connect(this, &BDPassPrinter::finishGenerateBoardingPass, processPrint, &ProcessPrint::receivePass);
}

void BDPassPrinter::generateBoardingPass() {
	QString name = infoFormDialog->getName();
	const QString toSeat[] = { "1A","2A" ,"3A" ,"4A" ,"5A" ,"6A" };
	int index = chooseFlightDialog->flightIndex;
	QImage pass(":/BDPassPrinter/Resources/pass.png");
	
	QPainter painter(static_cast<QPaintDevice*>(&pass));
	painter.setPen(QPen(Qt::black));
	painter.setFont(QFont("SimHei, Microsoft YaHei", 18));
	painter.drawText(391, 630, name);
	const QString toMonth[] = {"", "JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC" };
	painter.drawText(391, 760, QString("%1 ").arg(QDate::currentDate().day()) + toMonth[QDate::currentDate().month()]);
	painter.drawText(391, 900, QTime::currentTime().toString("hh:mm"));
	painter.drawText(1450, 485, "SP0520");
	painter.drawText(1450, 630, "F");
	painter.drawText(1450, 760, "8");
	painter.drawText(1450, 900, toSeat[index]);
	emit finishGenerateBoardingPass(pass);
}

void BDPassPrinter::back() {
	if (subWidgets->currentIndex() == 0) {
		chooseFlightDialog->clearStatus();
	}
	subWidgets->setCurrentIndex(subWidgets->currentIndex() - 1);
}