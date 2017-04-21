#include <bits/stdc++.h>
using namespace std;

int main(){
  int X, Y;
  cin >> X >> Y;
  
  if(X > Y) {
    int temp = X;
    X = Y;
    Y = temp;
  }

  int sum = 0;

  for(int i = X+1; i < Y; i++){
    if(abs(i)%2==1) {
      sum+=i;
    }
  }
  cout << sum << endl;
  return 0;
}
