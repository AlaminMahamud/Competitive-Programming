#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int j=1, k = 2, l= 3;
  for(int i = 0; i < n; i++){
    cout << j << " " << k << " " << l << " PUM" << endl;
    j+=4; k+=4; l+=4;
  }
  return 0;
}
