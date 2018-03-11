#include <iostream>
//#include "pcA.h"
//#include "pcB.h"
#include "pcD.h"
using namespace std;

int main()
{
	pcA oA;
	oA.display();
	pcB oB;
	oB.display();
	pcD oD;
	oD.display(); // potensi ambigu
	cout << "alamat oD: " << hex << &oD << dec << ", size oD = " << sizeof(oD) << endl;
	return 0;
}
