#include "calculatricedom.h"
#include <QtWidgets/QApplication>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CalculatriceDom w;
	w.showMaximized();
	w.setFixedSize(220,310);
	w.move(QApplication::desktop()->screen()->rect().center() - w.rect().center());
	w.show();

	return a.exec();
}
