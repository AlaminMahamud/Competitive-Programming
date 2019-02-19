#include <bits/stdc++.h>
using namespace std;

int main(){
  int test;
  cin >> test;
  while(test--){
    int X, Y;
    cin >> X >> Y;
    long long int sum = 0;
    int i = 0;
    while(i<Y){
      if(abs(X)%2==1) {
       sum += X;
       i++;
      }
      X++;
    }
    cout << sum << endl;
  }
  return 0;
}
