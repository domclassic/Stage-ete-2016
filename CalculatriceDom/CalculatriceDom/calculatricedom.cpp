#include "calculatricedom.h"
#include <QtCore/QCoreApplication>


CalculatriceDom::CalculatriceDom(QWidget *parent)
	: QMainWindow(parent)
{
	//bLayout = new QVBoxLayout;

	//output
	label = new QLabel("0", this);

	//grid layout
	grille = new QGridLayout;

	//bouttons digit
	sept_button = new QPushButton("7", this);
	grille->addWidget(sept_button, 0, 0);
	connect(sept_button, SIGNAL(released()), this, SLOT(sept()));

	huit_button = new QPushButton("8", this);
	grille->addWidget(un_button, 0, 1);
	connect(huit_button, SIGNAL(released()), this, SLOT(huit()));

	neuf_button = new QPushButton("9", this);
	grille->addWidget(un_button, 0, 2);
	connect(neuf_button, SIGNAL(released()), this, SLOT(neuf()));

	quatre_button = new QPushButton("4", this);
	grille->addWidget(un_button, 1, 0);
	connect(quatre_button, SIGNAL(released()), this, SLOT(quatre()));

	cinq_button = new QPushButton("5", this);
	grille->addWidget(un_button, 1, 1);
	connect(cinq_button, SIGNAL(released()), this, SLOT(cinq()));

	six_button = new QPushButton("6", this);
	grille->addWidget(un_button, 1, 2);
	connect(six_button, SIGNAL(released()), this, SLOT(six()));

	un_button = new QPushButton("1", this);
	grille->addWidget(un_button, 2, 0);
	connect(un_button, SIGNAL(released()), this, SLOT(un()));

	deux_button = new QPushButton("2", this);
	grille->addWidget(un_button, 2, 1);
	connect(deux_button, SIGNAL(released()), this, SLOT(deux()));

	trois_button = new QPushButton("3", this);
	grille->addWidget(un_button, 2, 2);
	connect(trois_button, SIGNAL(released()), this, SLOT(trois()));

	zero_button = new QPushButton("0", this);
	grille->addWidget(un_button, 4, 1);
	connect(zero_button, SIGNAL(released()), this, SLOT(zero()));

	//bouttons op.
	add_button = new QPushButton("+", this);
	grille->addWidget(un_button, 0, 3);
	connect(add_button, SIGNAL(released()), this, SLOT(add()));

	sous_button = new QPushButton("-", this);
	grille->addWidget(un_button, 1, 3);
	connect(sous_button, SIGNAL(released()), this, SLOT(sous()));

	mult_button = new QPushButton("*", this);
	grille->addWidget(un_button, 2, 3);
	connect(mult_button, SIGNAL(released()), this, SLOT(mult()));

	divi_button = new QPushButton("/", this);
	grille->addWidget(un_button, 3, 3);
	connect(divi_button, SIGNAL(released()), this, SLOT(divi()));

	egal_button = new QPushButton("=", this);
	grille->addWidget(un_button, 4, 3);
	connect(egal_button, SIGNAL(released()), this, SLOT(egal()));

	clear_button = new QPushButton("C", this);
	grille->addWidget(un_button, 4, 2);
	connect(clear_button, SIGNAL(released()), this, SLOT(clear()));



	//bLayout->addWidget(label, 0, 0);
	//bLayout->addLayout(grille);
	//this->setLayout(grille);


}





void CalculatriceDom::add() {
	num1 = value.toInt();
	value = "";
	label->setText(value);
	op = operation::Addi;
}

void CalculatriceDom::sous() {
	num1 = value.toInt();
	value = "";
	label->setText(value);
	op = operation::Sous;
}

void CalculatriceDom::mult() {
	num1 = value.toInt();
	value = "";
	label->setText(value);
	op = operation::Mult;
}

void CalculatriceDom::divi() {
	num1 = value.toInt();
	value = "";
	label->setText(value);
	op = operation::Divi;
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
	if (op == operation::Addi) {
		total = QString::number(num1+num2);
		label->setText(total);
	}
	else if (op == operation::Sous) {
		total = QString::number(num1 - num2);
		label->setText(total);
	}
	else if (op == operation::Mult) {
		total = QString::number(num1 * num2);
		label->setText(total);
	}
	else if (op == operation::Divi) {
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
