#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  int c[b];
  cin >> c[0];
  bool flag = true;
  for(int i = 1; i < b ; i++){
    cin >> c[i];
    if(abs(c[i] - c[i-1]) > a) flag = false;
  }
  
  if(flag) cout << "YOU WIN" << endl;
  else cout << "GAME OVER" << endl;
}
