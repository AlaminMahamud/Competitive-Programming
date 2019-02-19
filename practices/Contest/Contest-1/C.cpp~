#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n];
  map<int, int> m;
  m.clear();
  int d = 0;
  int p = 0;
  for(int i = 0; i < n; i++){
    int ii;
    cin >> ii;
    m[ii]++;
    if(m[ii] == 1){
      d++;
      a[p++] = ii;
    }
  }

  
  if( d != 3){
    cout << "NO" << endl;
  }else{
    sort(a,a+n,greater<int>());
    if(abs(a[0]-a[1]) == abs(a[1]-a[2]) ){   
      cout << "YES" << endl;
    }else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
