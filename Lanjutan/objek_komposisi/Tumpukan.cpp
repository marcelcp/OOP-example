#include "Tumpukan.h"
#include <cstring>
using namespace std;

void Tumpukan::Reset() 
{    
   mCount=0;   
   posTOS=mSize; 
}

void Tumpukan::setEmpty() 
{  
   Reset();
}

bool Tumpukan::isEmpty() 
{ 
   if (mCount==0) return true; 
   else return false; 
}

bool Tumpukan::isFull()
{
   if (mCount==mSize) return true;
   else return false;
}

int Tumpukan::getCount()
{
   return mCount;
}

int Tumpukan::getSize()
{
    return mSize;
}

bool Tumpukan::Push(int id,char * dsc)
{
    bool success=false;
    if (!isFull()) {
       --posTOS;
       ++mCount;
       mStack[posTOS].mNomorId=id;
       mStack[posTOS].mDeskripsi=new char[strlen(dsc)];
       strcpy(mStack[posTOS].mDeskripsi,dsc);
       success=true;
    }
    return success;
}

bool Tumpukan::Pop(int& id, char* dsc)
{
   bool success=false;
   if (!isEmpty()) {
      id=mStack[posTOS].mNomorId;
      strcpy(dsc,mStack[posTOS].mDeskripsi);
      mStack[posTOS].mDeskripsi=NULL;
      ++posTOS;
      --mCount;
      success=true;
    }
    else {
      id=-1;
      strcpy(dsc,".nil.");
    }
    return success;
}

bool Tumpukan::Top(int& id,char* dsc)
{
    bool validAccess=false;
    if (!isEmpty()) {
       id=mStack[posTOS].mNomorId;
       strcpy(dsc,mStack[posTOS].mDeskripsi);
       validAccess=true;
    }
    else {
       id=-1;
       strcpy(dsc,".nil.");
    }
    return validAccess;
}

Tumpukan::Tumpukan(int sz)
{
    mStack = new Data[sz];
    mSize=sz;
    Reset();
}


