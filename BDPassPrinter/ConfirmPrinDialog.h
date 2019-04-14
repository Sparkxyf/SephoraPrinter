#pragma once

#include <QWidget>
#include "ui_ConfirmPrinDialog.h"
#include "StackedDialog.h"

class ConfirmPrinDialog : public MDialog
{
	Q_OBJECT

public:
	ConfirmPrinDialog(QWidget *parent = Q_NULLPTR);
	~ConfirmPrinDialog();

private:
	void showEvent(QShowEvent *e)override;
	Ui::ConfirmPrinDialog ui;
	QImage bpPreview;
public slots:
	void setPreview(QImage);
signals:
	void generatePass();
};
