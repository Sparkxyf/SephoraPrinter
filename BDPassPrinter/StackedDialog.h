#pragma once
#include <QWidget>

class MDialog : public QWidget {
	Q_OBJECT
public:
	MDialog(QWidget *parent = nullptr) :QWidget(parent) {}
protected:
	int index;
public slots:
	void setIndex(int i_) {
		index = i_;
	}
signals:
	void changeDisplayedDialog(int);
};