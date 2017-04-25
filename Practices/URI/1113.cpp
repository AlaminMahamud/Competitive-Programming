#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, Y;
  while(cin >> X >> Y && X!=Y){
    if(X < Y) cout << "Crescente" << endl;
    else cout << "Decrescente" << endl;
  }
  return 0;
}
