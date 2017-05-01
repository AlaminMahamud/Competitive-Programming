#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int test;
  cin >> test;
  string s1, p1, s2, p2, par, impar;
  long long int a, b;
  while(test--){
    cin >> s1 >> p1 >> s2 >> p2;
    if(p1=="PAR") {
      par = s1;
      impar = s2;
    }
    else {
      par = s2;
      impar = s1;
    }
    cin >> a >> b;
    if( (a+b) % 2 == 0) cout << par << endl;
    else cout << impar << endl;
  }
  
}
