#include "pcD.h"
#include <iostream>
using namespace std;

pcD::pcD(void)
{
	intD=25;
}

pcD::~pcD(void)
{
   cout << "Destructor pcD" << endl;
}

void pcD::tayang(void)
{
	cout << "pcD.intD = " << intD << endl;
}


void pcD::display(void)
{
        cout << "pcD::display()" << endl;
	cout << "pcD.intD = " << intD << endl;
	cout << "Akses a (pcA), dipanggil dari class pcD -> ";
	pcA::display();
	cout << "Akses a (pcB), dipanggil dari class pcD -> ";
	pcB::display();
	// ubah a
	pcA::a=125;
	cout << "Akses a (pcA), dipanggil dari class pcD -> ";
	pcA::display();
	// ubah a
	pcB::a=150;
	cout << "Akses a (pcB), dipanggil dari class pcD -> ";
	pcB::display();
}



