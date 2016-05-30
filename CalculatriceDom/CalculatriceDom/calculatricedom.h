#ifndef CALCULATRICEDOM_H
#define CALCULATRICEDOM_H

#include <QtWidgets/QMainWindow>
#include "ui_calculatricedom.h"
#include <QtWidgets/QPushButton>
#include <QtWidgets/QLabel>
#include <QTWidgets>


class CalculatriceDom : public QMainWindow
{
	Q_OBJECT

public:
	CalculatriceDom(QWidget *parent = 0);
	~CalculatriceDom();

private slots:
	void add();
	void sous();
	void mult();
	void divi();
	void zero();
	void un();
	void deux();
	void trois();
	void quatre();
	void cinq();
	void six();
	void sept();
	void huit();
	void neuf();
	void egal();
	void clear();

private:
	QString value{ "" }, total{ "" };
	int num1, num2;
	bool addBool = false, sousBool = false, multBool = false, diviBool = false;
	//QWidget *unWidget;
	QGridLayout *grille;
	QLabel *label;
	QPushButton *add_button;
	QPushButton *sous_button;
	QPushButton *mult_button;
	QPushButton *divi_button;
	QPushButton *clear_button;
	QPushButton *zero_button;
	QPushButton *un_button;
	QPushButton *deux_button;
	QPushButton *trois_button;
	QPushButton *quatre_button;
	QPushButton *cinq_button;
	QPushButton *six_button;
	QPushButton *sept_button;
	QPushButton *huit_button;
	QPushButton *neuf_button;
	QPushButton *egal_button;
};

#endif // CALCULATRICEDOM_H
