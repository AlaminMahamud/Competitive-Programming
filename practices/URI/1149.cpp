#include <bits/stdc++.h>
using namespace std;

int main () {
  int A,N;
  cin >> A;
  do{
    cin >> N;
    if(N>0)break;
  }while(cin >> N);
  int i = 0;
  int sum = 0;
  while(i<N){
    sum += (A + i++);
  }
  cout << sum << endl;
  return 0;
}
