// COPYRIGHT 2017_RED

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char *argv[]) {
  int number;
  int hours;
  double rate;
  cin >> number >> hours >> rate;
  cout << "NUMBER = " << number << endl;
  cout << "SALARY = U$ " << fixed << setprecision(2) << static_cast<double>(hours) * rate << endl;
  return 0;
}
