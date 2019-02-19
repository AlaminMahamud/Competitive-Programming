// Implement Binary Search Recursively.

#include <bits/stdc++.h>
using namespace std;

bool rec(int L, int H, int *a, int x){
  if( L > H ) return false;
  int M = (L + H ) / 2;
  if(a[M] == x) return true;
  else if( a[M] < x ) rec(M+1, H, a, x);
  else rec(L, M-1, a, x);
}


int main(){
  int n;
  cin >> n;

  int a[n];
  
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  int q;
  cin >> q;

  for(int i = 0; i < q; i++){
    int d;
    cin >> d;
    cout << rec(0,n,a,d) << endl;
  }
  
  return 0;
}
