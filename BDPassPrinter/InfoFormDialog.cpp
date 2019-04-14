#include "InfoFormDialog.h"

InfoFormDialog::InfoFormDialog(QWidget *parent)
	: MDialog(parent){
	ui.setupUi(this);
	keyboardHandler = new QProcess(this);
	ui.nameEdit->setAttribute(Qt::WA_InputMethodEnabled);
	ui.phoneEdit->setAttribute(Qt::WA_InputMethodEnabled);
	connect(ui.nameEdit, &QLineEdit::textEdited, this, &InfoFormDialog::setName);
	connect(ui.phoneEdit, &QLineEdit::textEdited, this, &InfoFormDialog::setPhone);
	connect(ui.pushButton, &QPushButton::clicked, this, &InfoFormDialog::submit);
}

InfoFormDialog::~InfoFormDialog() {}

void InfoFormDialog::hideEvent(QHideEvent *e)
{
	keyboardHandler->kill();
	keyboardHandler->waitForFinished();
	ui.nameEdit->setText(QString());
	ui.phoneEdit->setText(QString());
	QWidget::hideEvent(e);
}

void InfoFormDialog::showEvent(QShowEvent *e)
{
	keyboardHandler->startDetached("\"C:\\Program Files\\Common Files\\microsoft shared\\ink\\TabTip.exe\"", QStringList());
	//keyboardHandler->startDetached("C:\\Windows\\System32\\osk.exe", QStringList());
	MDialog::showEvent(e);
}

void InfoFormDialog::setName(QString name_) {
	this->name = std::move(name_);
	emit sendName(this->name);
}

void InfoFormDialog::setPhone(QString phone_) {
	this->phone = std::move(phone_);
}

void InfoFormDialog::submit() {
	if (phone.isEmpty()) {
		QToolTip::showText(ui.phoneEdit->pos() + QPoint(35, 90), "Phone should not be empty.", ui.phoneEdit, QRect(), 3000);
	}
	for (auto& ch : phone) {
		if (!ch.isDigit()) {
			QToolTip::showText(ui.phoneEdit->pos()+QPoint(35,90), "Phone should only contains number", ui.phoneEdit,QRect(),3000);
			return;
		}
	}
	if (name.isEmpty()) {
		QToolTip::showText(ui.phoneEdit->pos() + QPoint(35, 90), "Name should not be empty.", ui.phoneEdit, QRect(), 3000);
	}
	emit changeDisplayedDialog(this->index + 1);
}