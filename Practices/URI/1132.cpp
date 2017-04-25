#include <bits/stdc++.h>
using namespace std;
int main(){
  int X, Y;
  cin >> X >> Y;
  if(X > Y) {
    X = X+Y;
    Y = X-Y;
    X = X-Y;
  }
  Y++;
  int sum = 0;
  for(int i = X; i < Y; i++){
    if(i%13 != 0) sum += i;
  }
  cout << sum << endl;
  return 0;
}
