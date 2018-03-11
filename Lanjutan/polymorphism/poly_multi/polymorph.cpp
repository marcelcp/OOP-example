#include <iostream>
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

         // polymorphism
         // perhatikan efek jika pada pcA dan pcB tanpa virtual pcAbs
        cout << endl << "Polymorphism pada multiple inheritance" << endl;
        pcAbs *p;
        cout << "Akses objek oD" << endl;
        p=&oD;
        p->display();     
        cout << endl << "Akses objek oA" << endl; 
        p=&oA;
        p->display();  
        cout << endl << "Akses objek oB" << endl; 
        p=&oB;
        p->display();  

        cout << endl << "Destructor" << endl;       
	return 0;
}
