// COPYRIGHT 2017_RED
#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main(int argc, char * argv[]) {
  double A;
  cin >> A;

  if (A >= 0.0 && A <= 25.00) cout << "Intervalo [0,25]" << endl;
  else if (A > 25.00 && A <= 50.00) cout << "Intervalo (25,50]" << endl;
  else if (A > 50.00 && A <= 75.00) cout << "Intervalo (50,75]" << endl;
  else if (A > 75.00 && A <= 100.00) cout << "Intervalo (75,100]" << endl;
  else
    cout << "Fora de intervalo" << endl;
  return 0;
}
