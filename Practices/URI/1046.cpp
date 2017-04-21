#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b;
  cin >> a >> b;
  if(b <= a) b+=24;
  cout << "O JOGO DUROU " << b-a << " HORA(S)" << endl;
  return 0;
}
