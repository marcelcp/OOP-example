#include "PersegiPanjang.h"
PersegiPanjang::PersegiPanjang(int lbr,int pjg)
{
     panjang=pjg;
     lebar=lbr;
}

PersegiPanjang::PersegiPanjang()
{
}

int PersegiPanjang::luas()
{
	return panjang*lebar;
}

int PersegiPanjang::keliling()
{
	return 2*(panjang+lebar);
}

int PersegiPanjang::infoPanjang()
{
	return panjang;
}

int PersegiPanjang::infoLebar()
{
	return lebar;
}

PersegiPanjang& PersegiPanjang::operator=(PersegiPanjang g)
{
	this->panjang=g.panjang;
	this->lebar=g.lebar;
	return *this;
}

PersegiPanjang PersegiPanjang::operator*(int k)
{
	this->panjang=this->panjang*k;
	this->lebar=this->lebar*k;
	return *this;
}

void PersegiPanjang::ubahDimensi(int lbr,int pjg)
{
    panjang=pjg;
    lebar=lbr;
}
