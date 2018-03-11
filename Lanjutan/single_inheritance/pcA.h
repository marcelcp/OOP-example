#pragma once
#include "pcAbs.h"

class pcA:public pcAbs
{
public:
	pcA(void);
	~pcA(void);
	void display();
        void tayang();
protected:
	int a;
};
