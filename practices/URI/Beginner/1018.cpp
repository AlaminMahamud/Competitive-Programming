// COPYRIGHT 2017_RED

#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;
using std::max;

int main(int argc, char *argv[]) {
  int a;
  cin >> a;
  cout << a << endl;
  cout << (a/100) << " nota(s) de R$ 100,00" << endl;
  a -= (100*(a/100));
        cout << (a/50) << " nota(s) de R$ 50,00" << endl;
        a -= (50*(a/50));
        cout << (a/20) <<" nota(s) de R$ 20,00" << endl;
        a -= (20*(a/20));
        cout << (a/10) <<" nota(s) de R$ 10,00" << endl;
        a -= (10*(a/10));
        cout << (a/5) <<" nota(s) de R$ 5,00" << endl;
        a -= (5*(a/5));
        cout << (a/2) <<" nota(s) de R$ 2,00" << endl;
        a -= (2*(a/2));
        cout << (a) <<" nota(s) de R$ 1,00" << endl;
  return 0;
}
