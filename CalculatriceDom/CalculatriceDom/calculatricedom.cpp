#include "calculatricedom.h"
#include <QtCore/QCoreApplication>

QString value{""}, total{ "" };
int num1, num2;
bool addBool = false, sousBool = false, multBool = false, diviBool = false;
CalculatriceDom::CalculatriceDom(QWidget *parent)
	: QMainWindow(parent)
{
	//output
	label = new QLabel("0", this);
	label->setGeometry(QRect(QPoint(10, 10), QSize(200, 100)));

	//bouttons digit
	un_button = new QPushButton("1", this);
	un_button->setGeometry(QRect(QPoint(10, 200), QSize(50, 50)));
	connect(un_button, SIGNAL(released()), this, SLOT(un()));

	deux_button = new QPushButton("2", this);
	deux_button->setGeometry(QRect(QPoint(60, 200), QSize(50, 50)));
	connect(deux_button, SIGNAL(released()), this, SLOT(deux()));

	trois_button = new QPushButton("3", this);
	trois_button->setGeometry(QRect(QPoint(110, 200), QSize(50, 50)));
	connect(trois_button, SIGNAL(released()), this, SLOT(trois()));

	quatre_button = new QPushButton("4", this);
	quatre_button->setGeometry(QRect(QPoint(10, 150), QSize(50, 50)));
	connect(quatre_button, SIGNAL(released()), this, SLOT(quatre()));

	cinq_button = new QPushButton("5", this);
	cinq_button->setGeometry(QRect(QPoint(60, 150), QSize(50, 50)));
	connect(cinq_button, SIGNAL(released()), this, SLOT(cinq()));

	six_button = new QPushButton("6", this);
	six_button->setGeometry(QRect(QPoint(110, 150), QSize(50, 50)));
	connect(six_button, SIGNAL(released()), this, SLOT(six()));

	sept_button = new QPushButton("7", this);
	sept_button->setGeometry(QRect(QPoint(10, 100), QSize(50, 50)));
	connect(sept_button, SIGNAL(released()), this, SLOT(sept()));

	huit_button = new QPushButton("8", this);
	huit_button->setGeometry(QRect(QPoint(60, 100), QSize(50, 50)));
	connect(huit_button, SIGNAL(released()), this, SLOT(huit()));

	neuf_button = new QPushButton("9", this);
	neuf_button->setGeometry(QRect(QPoint(110, 100), QSize(50, 50)));
	connect(neuf_button, SIGNAL(released()), this, SLOT(neuf()));

	zero_button = new QPushButton("0", this);
	zero_button->setGeometry(QRect(QPoint(10, 250), QSize(50, 50)));
	connect(zero_button, SIGNAL(released()), this, SLOT(zero()));

	//bouttons op.
	add_button = new QPushButton("+", this);
	add_button->setGeometry(QRect(QPoint(160, 100), QSize(50, 50)));
	connect(add_button, SIGNAL(released()), this, SLOT(add()));

	sous_button = new QPushButton("-", this);
	sous_button->setGeometry(QRect(QPoint(160, 150), QSize(50, 50)));
	connect(sous_button, SIGNAL(released()), this, SLOT(sous()));

	mult_button = new QPushButton("*", this);
	mult_button->setGeometry(QRect(QPoint(160, 200), QSize(50, 50)));
	connect(mult_button, SIGNAL(released()), this, SLOT(mult()));

	divi_button = new QPushButton("/", this);
	divi_button->setGeometry(QRect(QPoint(160, 250), QSize(50, 50)));
	connect(divi_button, SIGNAL(released()), this, SLOT(divi()));

	egal_button = new QPushButton("=", this);
	egal_button->setGeometry(QRect(QPoint(110, 250), QSize(50, 50)));
	connect(egal_button, SIGNAL(released()), this, SLOT(egal()));

	clear_button = new QPushButton("C", this);
	clear_button->setGeometry(QRect(QPoint(60, 250), QSize(50, 50)));
	connect(clear_button, SIGNAL(released()), this, SLOT(clear()));






}





void CalculatriceDom::add() {
	num1 = value.toInt();
	value = "";
	label->setText(value);
	addBool = true;
	sousBool = false;
	multBool = false;
	diviBool = false;
}

void CalculatriceDom::sous() {
	num1 = value.toInt();
	value = "";
	label->setText(value);
	addBool = false;
	sousBool = true;
	multBool = false;
	diviBool = false;
}

void CalculatriceDom::mult() {
	num1 = value.toInt();
	value = "";
	label->setText(value);
	addBool = false;
	sousBool = false;
	multBool = true;
	diviBool = false;
}

void CalculatriceDom::divi() {
	num1 = value.toInt();
	value = "";
	label->setText(value);
	addBool = false;
	sousBool = false;
	multBool = false;
	diviBool = true;
}

void CalculatriceDom::zero() {
	value = value + "0";
	label->setText(value);
}

void CalculatriceDom::un() {
	value = value + "1";
	label->setText(value);
}

void CalculatriceDom::deux() {
	value = value + "2";
	label->setText(value);
}

void CalculatriceDom::trois() {
	value = value + "3";
	label->setText(value);
}

void CalculatriceDom::quatre() {
	value = value + "4";
	label->setText(value);
}

void CalculatriceDom::cinq() {
	value = value + "5";
	label->setText(value);
}

void CalculatriceDom::six() {
	value = value + "6";
	label->setText(value);
}

void CalculatriceDom::sept() {
	value = value + "7";
	label->setText(value);
}

void CalculatriceDom::huit() {
	value = value + "8";
	label->setText(value);
}

void CalculatriceDom::neuf() {
	value = value + "9";
	label->setText(value);
}

void CalculatriceDom::egal() {
	num2 = value.toInt();
	value = "";
	if (addBool) {
		total = QString::number(num1+num2);
		label->setText(total);
	}
	else if (sousBool) {
		total = QString::number(num1 - num2);
		label->setText(total);
	}
	else if (multBool) {
		total = QString::number(num1 * num2);
		label->setText(total);
	}
	else if (diviBool) {
		total = QString::number(num1 / num2);
		label->setText(total);
	}

}

void CalculatriceDom::clear() {
	value = "";
	label->setText(value);
}

CalculatriceDom::~CalculatriceDom()
{

}
