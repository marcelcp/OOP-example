class PersegiPanjang
{
	int panjang;
	int lebar;
	public:
		PersegiPanjang(int lbr,int pjg);
		PersegiPanjang();
		int luas();
		int keliling();
		PersegiPanjang& operator=(PersegiPanjang p);
		PersegiPanjang operator*(int k);		
		int infoPanjang();
		int infoLebar();
		void ubahDimensi(int lbr,int pjg);
};

