#include <iostream>
#include "PersegiPanjang.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	PersegiPanjang g1(5,7),g2(3,8);

	cout << "g1: panjang = " << g1.infoPanjang() << ", lebar = " << g1.infoLebar() << endl;
	cout << "g2: panjang = " << g2.infoPanjang() << ", lebar = " << g2.infoLebar() << endl;	
	g2=g1;
	cout << "setelah operasi assignment, g2: panjang = " << g2.infoPanjang() << ", lebar = " << g2.infoLebar() << endl;	
	g1.ubahDimensi(12,18);
	cout << "setelah diubah, g1: panjang = " << g1.infoPanjang() << ", lebar = " << g1.infoLebar() << endl;	
	cout << "setelah operasi assignment dan g1 diubah, g2: panjang = " << g2.infoPanjang() << ", lebar = " << g2.infoLebar() << endl;	

	PersegiPanjang *ptrPg;		
	ptrPg=&g2;
	cout << "g2: panjang = " << g2.infoPanjang() << ", lebar = " << g2.infoLebar() << endl;	
	cout << "ptrPg: panjang = " << ptrPg->infoPanjang() << ", lebar = " << ptrPg->infoLebar() << endl;
	ptrPg->ubahDimensi(20,26);
	cout << "setelah ubah dimensi menggunakan ptrPg" << endl;
	cout << "g2: panjang = " << g2.infoPanjang() << ", lebar = " << g2.infoLebar() << endl;	
	cout << "ptrPg: panjang = " << ptrPg->infoPanjang() << ", lebar = " << ptrPg->infoLebar() << endl;

	g2.ubahDimensi(30,45);
	cout << "setelah ubah dimensi menggunakan g2" << endl;
	cout << "g2: panjang = " << g2.infoPanjang() << ", lebar = " << g2.infoLebar() << endl;	
	cout << "ptrPg: panjang = " << ptrPg->infoPanjang() << ", lebar = " << ptrPg->infoLebar() << endl;
	
	PersegiPanjang g3;
	g3=g2*2;
	cout << "g3=g2*2: panjang = " << g3.infoPanjang() << ", lebar = " << g3.infoLebar() << endl;	
						
	return 0;
}
