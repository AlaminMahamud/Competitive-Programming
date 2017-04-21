// COPYRIGHT 2017_RED

#include <bits/stdc++.h>
using namespace std;

int main() {
  double D;
  cin >> D;
  cout << "NOTAS:" <<endl;
  int a = static_cast<int>(D);
  D -= a;
  cout << (a/100) << " nota(s) de R$ 100.00" << endl;
  a -= (100*(a/100));
  cout << (a/50) << " nota(s) de R$ 50.00" << endl;
  a -= (50*(a/50));
  cout << (a/20) <<" nota(s) de R$ 20.00" << endl;
  a -= (20*(a/20));
  cout << (a/10) <<" nota(s) de R$ 10.00" << endl;
  a -= (10*(a/10));
  cout << (a/5) <<" nota(s) de R$ 5.00" << endl;
  a -= (5*(a/5));
  cout << (a/2) <<" nota(s) de R$ 2.00" << endl;
  a -= (2*(a/2));
  cout << "MOEDAS:" << endl;
  cout << a <<" moeda(s) de R$ 1.00" << endl;
  cout << static_cast<int>(D/.50) << " moeda(s) de R$ 0.50" << endl;
  D = D - (static_cast<int>(D/.5) * .5);
  cout << static_cast<int>(D/.25) << " moeda(s) de R$ 0.25" << endl;
  D = D - (static_cast<int>(D/.25) * .25);
  cout << static_cast<int>(D/.10) << " moeda(s) de R$ 0.10" << endl;
  D = D - (static_cast<int>(D/.10) * .10);
  cout << static_cast<int>(D/.05) << " moeda(s) de R$ 0.05" << endl;
  D = D - (static_cast<int>(D/.05) * .05);
  cout << ((D/.01)) << " moeda(s) de R$ 0.01" << endl;
  return 0;
}
