#include "QWDlgManual.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QWDlgManual w;
	w.show();
	return a.exec();
}
