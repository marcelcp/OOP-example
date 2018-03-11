#include "Data.h"

class Tumpukan{
   int mCount;
   int mSize;
   int posTOS;
   Data *mStack;
   void Reset();
public:
   Tumpukan(int sz=10);
   bool isEmpty();
   bool isFull();
   void setEmpty();
   bool Push(int, char *);
   bool Pop(int &, char *);
   bool Top(int &, char *);
   int getSize();
   int getCount();
};