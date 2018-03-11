#include "pcA.h"
#include <iostream>
using namespace std;

pcA::pcA(void)
{
	a=9;
}

pcA::~pcA(void)
{
   cout << "Destructor pcA" << endl;
}

void pcA::display(void)
{
	cout << "pcA.a = " << a << endl;
}

