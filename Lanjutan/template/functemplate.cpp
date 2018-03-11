#include <string>
#include <iostream>
#include <vector>
using namespace std;

void f(vector<int>& vi,vector<string>& vs);

int main()
{
   vector<int> vInt;
   vector <int>::iterator Iter;
   vector<string> svInt;
   vector <string>::iterator sIter;
   
   vInt.push_back(17);
   vInt.push_back(2);
   vInt.push_back(22);
   
   svInt.push_back("Surabaya");
   svInt.push_back("Bogor");
   svInt.push_back("Jakarta");


   f(vInt,svInt);

//   urutkan(vInt);

   cout << "vInt =" ;
   for ( Iter = vInt.begin( ) ; Iter != vInt.end( ) ; Iter++ )
      cout << " " << *Iter;
   cout << endl;

//   urutkan(svInt);
   cout << "vInt =" ;
   for ( sIter = svInt.begin( ) ; sIter != svInt.end( ) ; sIter++ )
      cout << " " << *sIter;
   cout << endl;


   return 0;
}

template<typename T>
urutkan(vector<T>& v)
{
    const size_t n=v.size();
   
   for (int gap=n/2;0<gap;gap/=2)
     for (int i=gap;i<n;i++)
        for (int j=i-gap;0<=j;j-=gap)
            if (v[j+gap]<v[j]) {
               T temp=v[j];
               v[j]=v[j+gap];
               v[j+gap]=temp;    
            }
}

void f(vector<int>& vi,vector<string>& vs)
{
    urutkan(vi);
    urutkan(vs);
}




