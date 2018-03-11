#include "pcB.h"
#include <iostream>
using namespace std;

pcB::pcB(void)
{
	a=15;
    cout << "Constructor pcB" << endl;
}

pcB::~pcB(void)
{
   cout << "Destructor pcB" << endl;
}

void pcB::display()
{
	cout << "pcB.a = " << a << endl;
}
