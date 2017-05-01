#include <bits/stdc++.h>
using namespace std;

int main(){
  int S, T, F;
  cin >> S >> T >> F;
  int d = S+T+F;
  if(d < 0) cout << d + 24 << endl;
  else if(d > 24) cout << d - 24 << endl;
  else if(d == 24) cout << 0 << endl;
  else cout << d << endl;
  return 0;
}
