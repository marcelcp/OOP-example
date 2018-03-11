#include "pcA.h"
#include <iostream>
using namespace std;

pcA::pcA(void)
{
	a=9;
    cout << "Constructor pCA" << endl;
}

pcA::~pcA(void)
{
    cout << "Destructor pCA" << endl;
}

void pcA::display()
{
	cout << "pcA.a = " << a << endl;
}

void pcA::tayang()
{
	cout << "pcA.a = " << a << endl;
}

