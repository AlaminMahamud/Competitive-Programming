#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int a[47];
  cin >> n; 
  a[0] = 0;
  a[1] = 1;
  for(int i = 0; i < n; i++){
    if(i != 0) cout << " ";
    if(i == 0) a[0] = 0;
    else if(i==1) a[1] = 1;
    else a[i] = a[i-1] + a[i-2];
    cout << a[i];
  }
  cout << endl;
  return 0;
}
