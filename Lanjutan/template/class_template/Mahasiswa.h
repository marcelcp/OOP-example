#include <string>
#pragma once
using namespace std;

class Mahasiswa
{
public:
	Mahasiswa(void);
        Mahasiswa(int pNim,float pip,string pNama);
	~Mahasiswa(void);
        int idMahasiswa();
        float ipKumulatif();
        string namaMahasiswa();
protected:
	int nim;
	float ipkum;
        string nama;
};
