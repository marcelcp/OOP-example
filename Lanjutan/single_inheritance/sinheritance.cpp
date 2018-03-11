#include <iostream>
#include <stdio.h>
//#include <unistd.h>
//#include <cstring>
//#include <cstdlib>
#include "pcD.h"
#include "pcA.h"
#include "pcB.h"
using namespace std;

int main()
{
	pcD oD;

 
//	printf("%x\n",oD.display());
	cout << hex << "address oD: " << &oD << ", size = " << dec << sizeof(oD) << endl;
/*
	pcA oA;
	cout << hex << "address oA: " << &oA << ", size = " << dec << sizeof(oA) << endl;
	pcB oB;
	cout << hex << "address oB: " << &oB << ", size = " << dec << sizeof(oB) << endl;
	cout << "Alamat function = " << hex << oD.display() << endl;
	cout << hex << "address os.display() " << oD.display() << endl;
	*/


        void (pcA::*t)(); // pointer ke member class
	oD.display();
       printf("t = %x\n",t);
        t=&pcA::display;
        printf("&t = %x\n",&t);
        t=&pcA::tayang;      
       printf("t tayang = %x\n",t); 
       printf("&t = %x\n",&t);
       (oA.*t)();


	return 0;
}
