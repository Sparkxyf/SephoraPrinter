#include "ConfirmPrinDialog.h"

ConfirmPrinDialog::ConfirmPrinDialog(QWidget *parent)
	: MDialog(parent)
{
	ui.setupUi(this);
	connect(ui.next, &QPushButton::clicked, [&]() {
		emit changeDisplayedDialog(this->index + 1);
	});
}

ConfirmPrinDialog::~ConfirmPrinDialog()
{
}

void ConfirmPrinDialog::showEvent(QShowEvent * e)
{
	emit generatePass();
}

void ConfirmPrinDialog::setPreview(QImage p) {
	bpPreview = std::move(p);
	ui.preview->setPixmap(QPixmap::fromImage(bpPreview.scaled(QSize(1000,400))));
}