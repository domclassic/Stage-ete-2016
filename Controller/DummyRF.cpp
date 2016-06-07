#include "DummyRF.h"


DummyRF::DummyRF()
{

}

int DummyRF::getDistance(){
	return currentDistance;
}

void DummyRF::checkDistance() {
	currentDistance = rand() % 120;
}

DummyRF::~DummyRF()
{

}