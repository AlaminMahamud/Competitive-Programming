// COPYRIGHT 2017_RED
#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main(int argc, char * argv[]) {
  double A, B, C;
  cin >> A >> B >> C;
  if (A == 0.0) {
    cout << "Impossivel calcular" << endl;
    return 0;
  }
  double DET = (B * B - 4.0 * A * C);
  if (DET >= 0) {
    double R1 = -B + sqrt(DET);
    R1 /= 2.0 * A;
    double R2 = -B - sqrt(DET);
    R2 /= 2.0 * A;
    cout << fixed << setprecision(5);
    cout << "R1 = " << R1 << endl;
    cout << "R2 = " << R2 << endl;
  } else {
    cout << "Impossivel calcular" <<endl;
  }
  return 0;
}
