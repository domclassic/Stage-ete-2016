#ifndef DUMMYRF_H
#define DUMMYRF_H

#include <cstdlib>



class DummyRF
{


public:
	DummyRF();
	~DummyRF();
	int getDistance();
	void checkDistance();


private:
	int currentDistance;


};

#endif // DUMMYRF_H
