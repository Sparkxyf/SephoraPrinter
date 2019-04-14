#include "BDPassPrinter.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	a.setAutoSipEnabled(true);
	BDPassPrinter w;
	w.show();
	return a.exec();
}
