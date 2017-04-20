// COPYRIGHT 2017_RED

#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;
using std::max;

int main(int argc, char *argv[]) {
  int a, b, c;
  cin >> a >> b >> c;
  cout << max(a, max(b, c)) << " eh o maior" << endl;
  return 0;
}
