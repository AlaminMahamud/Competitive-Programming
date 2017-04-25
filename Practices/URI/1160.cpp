#include <bits/stdc++.h>

using namespace std;
int main(){

  int test;
  cin >> test;
  double A, B;
  double RA, RB;
  while(test--){;
    cin >> A >> B >> RA >> RB;
    double RAA = RA/100.0 + 1.0;
    double RBB = RB/100.0 + 1.0;
    int i = 0;
    while(true){
      i++;
      A = (A * RAA);
      A = static_cast<int>(A);
      B = (B * RBB);
      B = static_cast<int>(B);
      if(i>100 || A > B)
        break;
    }
    if(i<101)
      cout << i << " anos.";
    else
      cout << "Mais de 1 seculo.";
      cout << endl;
  }
  return 0;
}
