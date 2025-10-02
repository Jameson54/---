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
  double step = 10.0;
  double sred_znachenie = 50.0;
  double max_znachenie = 250.0;
  
  cout << "V = ";
  cin  >> V;

  cout << "V0 = ";
  cin  >> V0;

  cout << "p0 = ";
  cin  >> p0;
    
  cout << "n = ";
  cin  >> n;
  
  cout << fixed << setprecision(3);
    
  while (n < sred_znachenie) {
    p = p0 * pow((V / (V + V0)), n);
    n = n + step;

  cout << "n = " << n << "\t \t" << p << endl;  
  }

  do {
    n = n + sred_znachenie;
    p = p0 * pow((V / (V + V0)), n);
  
  cout << "n = " << n << "\t \t" << p << endl;
  }
  
  while (n < max_znachenie);
  return 0;
}
