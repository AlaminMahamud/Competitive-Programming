#include <bits/stdc++.h>

using namespace std;


void rec(int n){

  if(n==0) return;
  cout << n%10;
  rec(n/10);
}


int main(){
  int n;
  cin >> n;
  rec(n);
  cout << endl;
  return 0;
}
