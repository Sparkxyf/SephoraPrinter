#pragma once

#include <QWidget>
#include "ui_ChooseFlightDialog.h"
#include "StackedDialog.h"

class ChooseFlightDialog : public MDialog
{
	Q_OBJECT
public:
	ChooseFlightDialog(QWidget *parent = Q_NULLPTR);
	~ChooseFlightDialog();
	int flightIndex = -1;
	bool randomSeatAvailable = true;
private:
	Ui::ChooseFlightDialog ui;
public slots:
	void clearStatus();
signals:
	void generatePass();
};
