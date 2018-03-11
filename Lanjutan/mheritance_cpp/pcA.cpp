#include "pcA.h"
#include <iostream>
using namespace std;

pcA::pcA(void)
{
	a=9;
}

pcA::~pcA(void)
{
}

void pcA::display()
{
	cout << "pcA.a = " << a << endl;
}

