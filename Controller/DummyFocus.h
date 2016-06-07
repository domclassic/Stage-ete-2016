#ifndef DUMMYFOCUS_H
#define DUMMYFOCUS_H

#include <cstdlib>


class DummyFocus
{


public:
	DummyFocus();
	~DummyFocus();
	int getFocus();
	void setFocus();


private:
	int const maxFocus{1000};
	int const minFocus{0};
	int currentFocus{ 0 };


};

#endif // DUMMYRF_H