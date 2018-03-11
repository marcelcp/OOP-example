#include "Mahasiswa.h"
using namespace std;

Mahasiswa::Mahasiswa(void)
{
}

Mahasiswa::~Mahasiswa(void)
{
}

Mahasiswa::Mahasiswa(int pNim,float pip,string pNama)
{
   nim=pNim;
   ipkum=pip;
   nama=pNama;   
}

int Mahasiswa::idMahasiswa()
{
   return nim;
}

float Mahasiswa::ipKumulatif()
{
   return ipkum;
}

string Mahasiswa::namaMahasiswa()
{
   return nama;
}
