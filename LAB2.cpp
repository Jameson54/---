/*******************************
 * Автор: Кондратенко Павел    *
 * Вариант: 7                  *
 *******************************/
 
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  double V, V0, p0, p, n;
  double initialStep = 10.0;
  double averageValue = 50.0;
  double finalValue = 250.0;
  int numberOfDigitsAfterTheDecimalPoint = 3.0;
  
  cout << "V = ";
  cin  >> V;

  cout << "V0 = ";
  cin  >> V0;

  cout << "p0 = ";
  cin  >> p0;
    
  cout << "n = ";
  cin  >> n;
  
  cout << fixed << setprecision(numberOfDigitsAfterTheDecimalPoint);
    
  while (n < averageValue) {
    p = p0 * pow((V / (V + V0)), n);
    n = n + initialStep;
    cout << "n = " << n << "\t \t" << p << endl;
  }

  do {
    n = n + averageValue;
    p = p0 * pow((V / (V + V0)), n);
    cout << "n = " << n << "\t \t" << p << endl;
  } while (n < finalValue);
 
  return 0;
}
