// COPYRIGHT 2017_RED
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a1, a2, b1, b2;
  cin >> a1 >> a2 >> b1 >> b2;
  if (b1 <= a1) b1 += 24;
  if (b2 < a2) {
    b2 += 60;
    b1--;
  }
  cout << "O JOGO DUROU " << b1-a1 << " HORA(S) E " << b2-a2 << " MINUTO(S)" << endl; 
  return 0;
}
