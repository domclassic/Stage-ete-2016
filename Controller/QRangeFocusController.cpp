#include "QRangeFocusController.h"

QRangeFocusController::QRangeFocusController(QWidget *parent)
	: QMainWindow(parent)
{
	unFocus = new DummyFocus();
	unRF = new DummyRF();
	bLayout = new QVBoxLayout;
	dataTable = new QTableWidget;

	dataTable->setColumnCount(2);
	dataTable->setRowCount(120);




	//grid layout
	grille = new QGridLayout;

	//bouttons digit
	calibrate_button = new QPushButton("Calibrer");
	grille->addWidget(calibrate_button, 0, 0);
	connect(calibrate_button, SIGNAL(released()), this, SLOT(calibrate()));

	bLayout->addWidget(dataTable);
	bLayout->addLayout(grille);

	QWidget * mainWidget = new QWidget;
	mainWidget->setLayout(bLayout);

	setCentralWidget(mainWidget);
}

int QRangeFocusController::findOptimalFocus(int min, int max) {
	optimalFocus = (max + min) / 2.0;
	int temp = checkClarity(optimalFocus)/2; // if image is clear, return the focus
	if (temp >= 45 && temp <= 55) {
		return optimalFocus;
	}
	else if(temp<45){ // if image is not clear enough and focus too low, lauch the method with shorter range (higher)
		findOptimalFocus(optimalFocus, max);
	}
	else if(temp>55){ // if image is not clear enough and focus too high, lauch the method with shorter range (lower)
		findOptimalFocus(min, optimalFocus);
	}
}


int QRangeFocusController::checkClarity(int aFocus) {
	int calcDist = (3 / 25.0) * (aFocus); // dummy clarity equation
	int realDist = unRF->getDistance(); //getting the actual distance
	return ((calcDist * 100) / realDist); // clarity is translated on 100 and return for further analysis  
}

void QRangeFocusController::calibrateFocus() {
	optimalFocus = findOptimalFocus(0, 1000);
	float m = (unRF->getDistance()) / ((float)optimalFocus); // y/x = m ----> la pente
	rangeFocusList[0] = 0;
	for (int i{ 1 }; i < 120; i++) {
		rangeFocusList[i] = i/m; // x/m = y --> which gives us the optimal focus to be displayed
	}



}

void QRangeFocusController::calibrate() {
	unRF->checkDistance();
	calibrateFocus();
	for (int i = 0; i < 120; i++) {
		dataTable->setItem(i,0, new QTableWidgetItem(QString::number(i)));
		dataTable->setItem(i, 1, new QTableWidgetItem(QString::number(rangeFocusList[i])));
	}
	//update();
}

QRangeFocusController::~QRangeFocusController() {
	
}
