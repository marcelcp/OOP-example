#include <iostream>
#include <stdio.h>
#include "pcD.h"
#include "pcE.h"
using namespace std;

int main()
{
	pcD oD;
        pcE oE;
    
        oD.display();
	cout << hex << "address oD: " << &oD << ", size = " << dec << sizeof(oD) << endl;


        // polymorphism
        cout << endl << "Polymorphism" << endl;
        pcAbs *p;
        cout << "Akses objek oD" << endl;
        p=&oD;
        p->display();
        cout << endl << "Akses objek oE" << endl;        
        p=&oE;
        p->display();            
        cout << endl << "Akses objek oA" << endl; 
        pcA oA;
        p=&oA;
        p->display();  
        cout << endl << "Akses objek oB" << endl; 
        pcB oB;
        p=&oB;
        p->display();  
        cout << endl << "Destructor" << endl;
	return 0;
}
