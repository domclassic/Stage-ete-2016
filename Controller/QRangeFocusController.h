#ifndef QRANGEFOCUSCONTROLLER_H
#define QRANGEFOCUSCONTROLLER_H

#include <QtWidgets>
#include<map>
#include<DummyFocus.h>
#include<DummyRF.h>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>
#include<QTableWidget>

class QRangeFocusController : public QMainWindow {
	Q_OBJECT

public:
	QRangeFocusController(QWidget *parent = 0);
	~QRangeFocusController();
	int findOptimalFocus(int max, int min);
	int checkClarity(int aFocus);
	void calibrateFocus();

private slots:
	void calibrate();


private:
	QString value{ "" };
	std::map<int, int> rangeFocusList;
	DummyRF *unRF;
	DummyFocus *unFocus;
	QPushButton *calibrate_button;
	QGridLayout *grille;
	QVBoxLayout *bLayout;
	int optimalFocus;
	int const minFocus{ 0 }, maxFocus{ 1000 };
	QTableWidget *dataTable;
};

#endif // QRANGEFOCUSCONTROLLER_H