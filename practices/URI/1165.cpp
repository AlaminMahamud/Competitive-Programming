#include <bits/stdc++.h>
using namespace std;

bool is_prime(int d){
  if(d == 2) return true;
  if(d%2 == 0) return false;
  int root = (sqrt(d)) +1;
  int i = 3;
  while(i<root){
    if(d%i==0) return false;
    i+=2;
  }
  return true;
}

int main(){
  int n, d;
  cin >> n;
  while(n--){
    cin >> d;
    if(is_prime(d)) cout << d << " eh primo" << endl;
    else cout << d << " nao eh primo" << endl;
  }
  return 0;
}
