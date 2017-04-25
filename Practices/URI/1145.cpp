#include <bits/stdc++.h>
using namespace std;

int main(){
  int X, Y;
  cin >> X >> Y;
  int i = 1;
  int p = X-1;
  Y++;
  int cond = Y-X+1;
  while(i<cond){
    for(int j = 0; j < X; j++){
      cout << i++;
      if(j!=p) cout << " ";
      else cout << endl;
    }
  }
  return 0;
}
