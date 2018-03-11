#include "pcB.h"
#include <iostream>
using namespace std;

pcB::pcB(void)
{
	a=15;
}

pcB::~pcB(void)
{
   cout << "Destructor pcB" << endl;
}

void pcB::display(void)
{
	cout << "pcB.a = " << a << endl;
}