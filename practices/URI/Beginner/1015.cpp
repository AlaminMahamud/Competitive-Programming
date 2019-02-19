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
  double a1, a2;
  double b1, b2;
  cin >> a1 >> a2 >> b1 >> b2;
  cout << fixed << setprecision(4);
  double X = (a1-b1);
  double Y = (a2-b2);
  cout << sqrt(X * X + Y * Y)<< endl;
  return 0;
}
