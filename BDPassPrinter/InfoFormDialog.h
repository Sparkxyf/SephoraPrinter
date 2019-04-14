#pragma once

#include <QWidget>
#include <QToolTip>
#include <Qprocess>
#include "ui_InfoFormDialog.h"
#include "StackedDialog.h"


class InfoFormDialog : public MDialog
{
	Q_OBJECT
public:
	InfoFormDialog(QWidget *parent = Q_NULLPTR);
	~InfoFormDialog();
	QString getName() { return name; }
private:
	void hideEvent(QHideEvent*)override;
	void showEvent(QShowEvent*)override;
	Ui::InfoFormDialog ui;
	QString name;
	QString phone;
	QProcess* keyboardHandler = nullptr;
private slots:
	void setName(QString);
	void setPhone(QString);
	void submit();
signals:
	void sendName(QString);
};
