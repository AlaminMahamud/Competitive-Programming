// COPIED from Pin3da

#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  int m1, m2;
  m1 = b-a;
  m2 = c-b;
  if (m2>m1) cout << ":)" <<endl;
  else if (m2<m1) cout << ":(" << endl;
  else {
    if(m1<=0) cout <<":(" << endl;
    else cout << ":)" << endl;
  }
  return 0;
}
