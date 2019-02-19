#include <bits/stdc++.h>

using namespace std;


int maxi( int i, int *a, int n){

  if(i == n-1) return a[i];
  
  return max(a[i],maxi(i+1, a, n));
  
}



int main(){

  int a[] = {1,2 ,10000,2, 200};

  cout << maxi(0, a,5) << endl;

  
}
