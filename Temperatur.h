#include <string>
using namespace std;

class Temperatur {
      double nilTemperatur;
      char unitTemperatur;
public:
      Temperatur(double pNilaiTemperatur,char pUnitTemperatur);
      double temperaturInCelsius();
      string currentUnitTemperatur();             
      };
      
