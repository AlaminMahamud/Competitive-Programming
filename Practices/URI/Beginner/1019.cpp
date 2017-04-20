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
  int N;
  cin >> N;
  cout << N/3600;
  N -= (N/3600) * 3600;
  cout <<":";
  cout << N/60;
  N -= (N/60) * 60;
  cout <<":";
  cout << N <<endl;
  return 0;
}
