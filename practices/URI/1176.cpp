#include <bits/stdc++.h>
using namespace std;

unsigned long long int a[65];

void fib(){
  a[0] = 0;
  a[1] = 1;
  for(int i = 2; i < 65; i++)
    a[i] = a[i-1] + a[i-2];
}

int main(){
  fib();
  int n;
  cin >> n;
  int i;
  while(n--){
    cin >> i;
    cout << "Fib("<< i <<") = "<< a[i] << endl;
  }
  return 0;
}
