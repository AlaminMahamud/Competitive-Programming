#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;

  int D1, H1, M1, S1;
  int D2, H2, M2, S2;
  int D, H, M, S;

  cin >> s >> D1;

  cin >> H1 >> s >>  M1 >> s >>  S1;
  cin >> s >> D2;
  cin >> H2 >> s >> M2 >> s >> S2;
  

  bool carry = false;
  if(S2 < S1) {
    S2 += 60;
    carry = true;
  }
  if(carry){
    M1++;
    carry = false;
  }
  if(M2 < M1) {
    M2 += 60;
    carry = true;
  }
  if(carry){
    H1++;
    carry = false;
  }
  if(H2 < H1) {
    H2 += 24;
    carry = true;
  }
  if(carry){
    D1++;
    carry = false;
  }

  cout << D2 - D1 << " dia(s)" << endl;
  cout << H2 - H1 << " hora(s)" << endl;
  cout << M2 - M1 << " minuto(s)" << endl;
  cout << S2 - S1 << " segundo(s)" << endl;
  
  return 0;
}
