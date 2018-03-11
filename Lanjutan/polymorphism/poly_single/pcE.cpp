#include "pcE.h"
#include <iostream>
using namespace std;

pcE::pcE(void)
{
	a=25;
        e=17;
    cout << "Constructor pcE" << endl;
}

pcE::~pcE(void)
{
   cout << "Destructor pcE" << endl;
}

void pcE::display()
{
        cout << "dari pcE::display()" << endl;
	cout << "  pcE.a = " << a << endl;
	cout << "  pcE.e = " << e << endl;
}
