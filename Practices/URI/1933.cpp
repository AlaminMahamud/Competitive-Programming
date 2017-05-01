#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a, b;
  cin >> a >> b;
  if(a==b) cout << a << endl;
  else cout << max(a,b) << endl;
  return 0;
}
