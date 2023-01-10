#include <iostream>
using namespace std;

int main() {
  setlocale(LC_CTYPE, "ukr");
  const int mask = 128;
  int address;
  
  cout << "Введіть октет адреси за протоколом ІР версії 4: ";
  cin  >> address;
  if (address < 0 || address > 255){
    cout << "Error";
    return 0;
  }
  
  cout << "В нашій мережі застосована маска: " << mask << "\n";
  cout << "Октет адреси підмережі: "           << (address & mask) << "\n";
   
  return 0;
}
