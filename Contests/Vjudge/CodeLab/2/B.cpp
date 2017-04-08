#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin >> s;
  int qq,q,p;
  cin >> qq;
  int l = s.length();
  for(int i = 0; i < qq; i++){
    int de;
    cin >> de;
    for(p = de-1, q = (l-de) ; p < q; p++,q--){
      char c = s[p];      
      s[p] = s[q];
      s[q] = c;
    }
  }
  cout << s << endl;
  return 0;
}
