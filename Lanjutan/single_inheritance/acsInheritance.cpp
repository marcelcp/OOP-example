#include <iostream>
#include <stdio.h>
#include "pcD.h"
//#include "pcA.h"
#include "pcE.h"
using namespace std;

int main()
{
	pcD oD;
        pcA oA;
        pcE oE;

        oD.display();
        oA.display();
        oE.display();
        pcAbs *p; // untuk abstract class

        // polymorphism
        cout << endl << "Polymorphism" << endl;
        p=&oD;
        p->display();    
        p=&oA;
        p->display(); 
        p=&oE;
        p->display(); 
        cout << "Akses oA kembali" << endl;
        p=&oA;
        p->display();
  
	cout << hex << "address oD: " << &oD << ", size = " << dec << sizeof(oD) << endl;
/*
	pcA oA;
	cout << hex << "address oA: " << &oA << ", size = " << dec << sizeof(oA) << endl;
	pcB oB;
	cout << hex << "address oB: " << &oB << ", size = " << dec << sizeof(oB) << endl;
	cout << "Alamat function = " << hex << oD.display() << endl;
	cout << hex << "address os.display() " << oD.display() << endl;
	*/



	return 0;
}
