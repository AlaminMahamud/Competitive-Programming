#include <bits/stdc++.h>
using namespace std;

int main(){
  int X, Z;
  cin >> X;
  do{
    cin >> Z;
    if(Z>X) break;
  }while(Z<=X);
  int i = 1;
  int sum = X;
  Z++;
  for(int j = X+1; j < Z; j++){
    sum += j;
    ++i;
    if(sum>Z) break;
  }
  cout << i << endl;
  return 0;
}
