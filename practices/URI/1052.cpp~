#include <bits/stdc++.h>
using namespace std;

int main(){
  double A;
  cin >> A;
  double T = 0.0;

  if (A > 4500.00) {
    T += (A-4500.00) * .28;
    A -= (A-4500.00);
  }
  if(A > 3000.00) {
    T += (A-3000.00) * .18;
    A -= (A-3000.00);
  }
  if(A > 2000.00) {
    T += (A-2000.00) * .08;
    A -= (A-2000.00);
  }
  
  cout << fixed << setprecision(2);

  if(T != 0.0) cout << "R$ " << T << endl;
  else cout << "Isento" << endl;

  return 0;
}
