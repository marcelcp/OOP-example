#include "Mhs_S1.h"
using namespace std;

Mhs_S1::Mhs_S1(void)
{
   gelar="S.Inf";
}

Mhs_S1::~Mhs_S1(void)
{
}

Mhs_S1::Mhs_S1(int pNim,float pip,string pNama,string pGelar)
{
   nim=pNim;
   ipkum=pip;
   nama=pNama;
   gelar=pGelar;
}

string Mhs_S1::gelar_S1()
{
    return gelar;
}

