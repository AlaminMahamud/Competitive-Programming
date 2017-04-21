#include <bits/stdc++.h>
using namespace std;

int main(){
  double A;
  cin >> A;
  double B;
  int C = 0;
  cout << fixed << setprecision(2);
  if (A>=0 && A<= 400.0){
    B = A * .15;
    C = 15;
  }else if ( A > 400.00 && A <= 800.00) {
    B = A * .12;
    C = 12;
  }else if ( A > 800.00 && A <= 1200.00) {
    B = A * .10;
    C = 10;
  }else if ( A > 1200.00 && A <= 2000.00) {
    B = A * .07;
    C = 7;
  }else if (A > 2.000) {
    B = A * .04;
    C = 4;
  }
  cout << "Novo salario: " << A+B << endl;
  cout << "Reajuste ganho: " << B << endl;
  cout << "Em percentual: " << C << " %" << endl;
  return 0;
}
