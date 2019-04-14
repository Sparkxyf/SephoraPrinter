#include "StartPage.h"

StartPage::StartPage(QWidget *parent)
	: MDialog(parent)
{
	ui.setupUi(this);
	connect(ui.nextButton, &QPushButton::clicked, [&]() {
		emit changeDisplayedDialog(this->index + 1);
	});
}

StartPage::~StartPage()
{
}
