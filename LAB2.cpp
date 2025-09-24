/*******************************
 * Автор: Кондратенко Павел    *
 * Вариант: 7                  *
 *******************************/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  double V, V0, P0;
  const int k = 9;
  int i;
  double n[k], p;
  
  cout << "V = ";
  cin  >> V;
    
  cout << "V0 = ";
  cin  >> V0;
    
  cout << "P0 = ";
  cin  >> P0;
  
  cout << "Vvedite 9 eiementov:" << endl;
  for (i = 0; i < 9; i++)
  cin >> n[i];
    
  cout << setw(3) << "n" << setw(10) << "p" << endl;
  cout << setw(25) << setfill('-') << "" << setfill(' ') << endl;
  
  cout  << fixed << setprecision(3);
  for (i = 0; i < 9; i++) {  
  p = P0 * pow(V / (V + V0), n[i]);
  
  cout << n[i] << "\t" << p << endl;
}
  return 0;
}
