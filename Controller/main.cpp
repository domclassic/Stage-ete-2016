#include "QRangeFocusController.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QRangeFocusController w;
	w.show();
	return a.exec();

}
