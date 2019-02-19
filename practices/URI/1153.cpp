#include <bits/stdc++.h>
using namespace std;

long long int fact(long long int N){
  if (N<=1) return 1;
  return N * fact(N-1);
}

int main(){
  long long int N;
  cin >> N;
  cout << fact(N) << endl;

  return 0;
}
