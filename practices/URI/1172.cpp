#include <bits/stdc++.h>
using namespace std;

int main(){
  int x[10];
  int d;
  for(int i = 0; i < 10; i++){
    cin >> d;
    if(d>0)
      x[i] = d;
    else x[i] = 1;
    cout << "X["<< i <<"] = " << x[i] << endl;
  }
}
