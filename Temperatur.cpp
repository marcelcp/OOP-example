#include <string>
#include "Temperatur.h"
using namespace std;

Temperatur::Temperatur(double pNilaiTemperatur,char pUnitTemperatur)
{
   nilTemperatur=pNilaiTemperatur;
        switch (pUnitTemperatur) {
         case 'C':
         case 'c':
         case 'R':
         case 'r':
         case 'K':
         case 'k':
         case 'F':
         case 'f': {
            unitTemperatur=pUnitTemperatur;
            break;
         }
         default: {
            unitTemperatur='C';
         }
       } // endcase  
}

double Temperatur::temperaturInCelsius()
{
        double retCelsius=0;
        switch (unitTemperatur) {
          case 'R':
          case 'r': {
             retCelsius=1.25*nilTemperatur;
             break;
          }
          case 'C':
          case 'c': { retCelsius=nilTemperatur;break;}
        } // endcase
        return retCelsius;
}

string Temperatur::currentUnitTemperatur()
{
       string retUnit="";
       switch(unitTemperatur) {
          case 'C': {retUnit="Celsius"; break;}
          case 'R': {retUnit="Reamur"; break;}
          case 'F': {retUnit="Fahrenheit"; break;}
          case 'K': {retUnit="Kelvin"; break;}
       } // endcase
       return retUnit;      
}                              
