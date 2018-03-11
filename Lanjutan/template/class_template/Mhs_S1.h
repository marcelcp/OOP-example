#pragma once
#include "Mahasiswa.h"
using namespace std;

class Mhs_S1:public Mahasiswa
{
public:
	Mhs_S1(void);
	~Mhs_S1(void);
        Mhs_S1(int pNim,float pip,string pNama,string pGelar);
        string gelar_S1();
private:
	string gelar;
};
