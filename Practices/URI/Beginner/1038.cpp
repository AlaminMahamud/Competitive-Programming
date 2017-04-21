// COPYRIGHT 2017_RED
#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main(int argc, char * argv[]) {
  double a[] = {0.0, 4.0, 4.50, 5.00, 2.00, 1.50};
  int X, Y;
  cin >> X >> Y;
  cout << fixed << setprecision(2);
  cout << "Total: R$ " << a[X] * static_cast<double>(Y) << endl;
  return 0;
}
