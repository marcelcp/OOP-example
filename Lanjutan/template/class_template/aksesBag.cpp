#include <iostream>
#include <string>
#include "Bag"
#include "Mahasiswa.h"
#include "Mhs_S1.h"
using namespace std;

int main()
{
	Bag<int> b;

	int myData;
	b.simpan(20);
	b.simpan(15);
	b.simpan(7);

	int d;
	d=25;
    b.simpan(d);
	b.berikutnya(myData);
    cout << "myData = " << myData << endl;
	b.berikutnya(myData);
	cout << "myData = " << myData << endl;
	b.berikutnya(myData);
    cout << "myData = " << myData << endl;
	b.berikutnya(myData);
	cout << "myData = " << myData << endl;
	b.berikutnya(myData);
    cout << "myData = " << myData << endl;
	b.berikutnya(myData);
	cout << "myData = " << myData << endl;
	b.berikutnya(myData);
	cout << "myData = " << myData << endl;

	Mahasiswa m1,g;
        Mahasiswa m2(15,2.75,"Bernard");
	Mhs_S1 s1,h;
        Mhs_S1 s2(16,3.12,"Robert","S.Kom");
	Bag<Mahasiswa> aMhs;
//	Bag<Mhs_S1> aMhs;
	aMhs.simpan(s1);
	aMhs.simpan(s2);
        aMhs.simpan(m1);
        aMhs.simpan(m2); 
        cout << endl << "Banyakya elemen tersimpan pada aMhs<Mahasiswa> = " << aMhs.banyaknyaElemen() << endl;
        for (int i=0;i<aMhs.banyaknyaElemen();i++) {
            aMhs.berikutnya(h); // h
            cout << "Nama: " << h.namaMahasiswa() << ", gelar : " << h.gelar_S1() << endl;
        }

	Bag<Mhs_S1> a_S1;
	a_S1.simpan(s1);
	a_S1.simpan(s2);
        cout << endl << "Banyakya elemen tersimpan pada aMhs<Mhs_S1> = " << aMhs.banyaknyaElemen() << endl;
        for (int i=0;i<a_S1.banyaknyaElemen();i++) {
            a_S1.berikutnya(h);
            cout << "Nama: " << h.namaMahasiswa() << ", gelar : " << h.gelar_S1() << endl;
        }
      return 0;
}
