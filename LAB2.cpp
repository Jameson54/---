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

  cout << "V = ";
  cin  >> V;

  cout << "V0 = ";
  cin  >> V0;

  cout << "p0 = ";
  cin  >> p0;
    
  cout << "n = ";
  cin  >> n;
    
  while (n < 50) {
    p = p0 * pow((V / (V + V0)), n);
    n = n + 10;

    cout << "n = " << n << "\t \t" << p << endl;  
}

  do {
    n = n + 50;
    p = p0 * pow((V / (V + V0)), n);
  
    cout << "n = " << n << "\t \t" << p << endl;
  
} while (n < 250);

    return 0;
}
