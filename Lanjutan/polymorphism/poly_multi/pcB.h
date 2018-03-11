#pragma once
#include "pcAbs.h"

class pcB:public virtual pcAbs
//class pcB:public pcAbs
{
public:
	pcB(void);
	~pcB(void);
	void display();
protected:
	int a;
};
