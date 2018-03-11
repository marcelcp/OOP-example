#pragma once
#include "pcAbs.h"

class pcA:public virtual pcAbs
//class pcA:public pcAbs
{
public:
	pcA(void);
	~pcA(void);
	void display();
protected:
	int a;
};
