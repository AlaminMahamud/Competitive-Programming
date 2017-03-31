#include<bits/stdc++.h>

using namespace std;

void rec(int i, int *a, int n){
  
  if(i==n-2){

    if(a[i] > a[i+1]){
      int dd = a[n-1];
      a[n-1] = a[i];
      a[n-2] = dd;
    }

    return;
  }

  rec (i+1, a, n);

  
  if(a[i] > a[n-1]){

    int d = a[n-1];
    a[n-1] = a[i];
    if(a[n-2] < d) a[n-2] = d;
    
  }else if(a[i] > a[n-2]) {
    a[n-2] = a[i];
  }

  a[i] = -1;
}

int main(){

  int n;

  cin >> n;

  int a[n];
  
  for(int i = 0; i < n; i++)
    cin >> a[i];
  rec(0,a,n);
  cout << a[n-2] << endl;
  
  return 0;
}
