#pragma once

#include <QWidget>
#include "ui_StartPage.h"
#include "StackedDialog.h"

class StartPage : public MDialog
{
	Q_OBJECT

public:
	StartPage(QWidget *parent = Q_NULLPTR);
	~StartPage();

private:
	Ui::StartPage ui;
};
