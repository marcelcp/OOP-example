#include <iostream>
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

	Mahasiswa m1,m2;
	Mhs_S1 s1,s2;
	Bag<Mahasiswa> aMhs;
	aMhs.simpan(m1);
	aMhs.simpan(m2);
	aMhs.simpan(s1);
	aMhs.simpan(s2);

      return 0;
}
