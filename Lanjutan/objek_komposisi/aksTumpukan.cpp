#include <string>
#include <iostream>
#include "Tumpukan.h"
using namespace std;

int main()
{
   Tumpukan t(20);
   int i,myId;
   char myDesc[30];
 
   if (t.isEmpty()) 
         cout << "Tumpukan masih kosong" << endl;
   else
         cout << "Tumpukan sudah ada isi" << endl;
   cout << "Ukuran tumpukan yang tersedia : " << t.getSize() << endl;
 
   myId=0;
   for (i=0;i<5;i++) {
      cout << "Deskripsi ke-" << i+1 << " = ";
      cin >> myDesc;
      myId =i+1;
      if (t.Push(myId,myDesc))
         cout << "Berhasil push elemen" << endl;
      else
         cout << "Gagal push elemen" << endl;
      cin.ignore();
   } // endfor-i
   cout <<"Ukuran tumpukan = " << t.getSize() << endl;

   t.Top(myId,myDesc);
   cout << "Top(): Nomor id: " << myId << ", Deskripsi : " << myDesc << endl;

   for (i=0;i<5;i++) {
       t.Pop(myId, myDesc);
       cout << "Pop(): Nomor id: " << myId << ", Deskripsi : " << myDesc << endl;
   } // endfor-i akses

   return 0;
}
