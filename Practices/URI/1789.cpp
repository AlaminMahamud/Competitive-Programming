#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  while(cin >> n){
  int l = 0;
  int d;

  while(n--){
    cin >> d;
    if(l==3)continue;
    if(d>19) {
      l = 3;
    }
    else if(d>9) l = 2;
    else if(l!=2) l = 1;
  }
  cout << l << endl;
  }
  return 0;
}
