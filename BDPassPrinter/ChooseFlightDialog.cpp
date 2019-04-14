#include "ChooseFlightDialog.h"

#define GET_DEST(X) dest##X
#define GET_WIDGET(X) widget##X
#define GET_PIC_NAME(X) d##X
#define GET_PIC_NAME_DISABLED(X) GET_PIC_NAME(X)##_disable
#define GET_URL(X) border-image: url(:/BDPassPrinter/Resources/GET_PIC_NAME(X).png);
#define GET_URL_DISABLED(X) border-image: url(:/BDPassPrinter/Resources/GET_PIC_NAME_DISABLED(X).png);
#define _GET_PIC(X) #X
#define GET_PIC(X) _GET_PIC(X)
#define ALL_CLEAR ui.GET_WIDGET(0)->setStyleSheet(GET_PIC(GET_URL(0)));\
ui.GET_WIDGET(1)->setStyleSheet(GET_PIC(GET_URL(1)));\
ui.GET_WIDGET(2)->setStyleSheet(GET_PIC(GET_URL(2)));\
ui.GET_WIDGET(3)->setStyleSheet(GET_PIC(GET_URL(3)));\
ui.GET_WIDGET(4)->setStyleSheet(GET_PIC(GET_URL(4)));

#define ALL_ENABLE ui.GET_DEST(0)->setEnabled(true);\
ui.GET_DEST(1)->setEnabled(true);\
ui.GET_DEST(2)->setEnabled(true);\
ui.GET_DEST(3)->setEnabled(true);\
ui.GET_DEST(4)->setEnabled(true);

#define SETUP(X) \
connect(ui.GET_DEST(X), &QPushButton::clicked, [&]() {\
	if (randomSeatAvailable) {\
		randomSeatAvailable = false;\
		flightIndex = 5;\
	}\
	else {\
		flightIndex = (X);\
		ui.GET_DEST(X)->setEnabled(false);\
		ui.GET_WIDGET(X)->setStyleSheet(GET_PIC(GET_URL_DISABLED(X)));\
	}\
	emit generatePass();\
	emit changeDisplayedDialog(this->index + 1);\
});


ChooseFlightDialog::ChooseFlightDialog(QWidget *parent)
	: MDialog(parent){
	ui.setupUi(this);
	ALL_CLEAR
	SETUP(0)
	SETUP(1)
	SETUP(2)
	SETUP(3)
	SETUP(4)
}

ChooseFlightDialog::~ChooseFlightDialog(){
}

void ChooseFlightDialog::clearStatus() {
	randomSeatAvailable = true;
	ALL_CLEAR
	ALL_ENABLE
}