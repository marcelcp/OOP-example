#pragma once
#include "pcA.h"
#include "pcB.h"

class pcD:public pcA, public pcB
{
public:
	pcD(void);
	~pcD(void);
	void tayang();
	void display();
private:
	int intD;
};
