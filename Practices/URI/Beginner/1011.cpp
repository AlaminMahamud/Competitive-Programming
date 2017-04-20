// COPYRIGHT 2017_RED

#include <iostream>
#include <string>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

int main(int argc, char *argv[]) {
  double R;
  cin >> R;
  cout << fixed << setprecision(3);
  cout << "VOLUME = " << (4.0/3.0) * 3.14159 * R * R * R << endl;
  return 0;
}
