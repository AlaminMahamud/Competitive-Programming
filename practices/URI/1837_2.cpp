#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a, b, r;
  cin >> a >> b;
  for(r=0; r < abs(b); r++)
    if((a-r)%b == 0)
      break;
  cout << (a-r)/b << " " << r << endl;
  return 0;
}
