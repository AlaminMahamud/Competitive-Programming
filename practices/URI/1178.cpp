#include <bits/stdc++.h>
using namespace std;

int main(){
  double d;
  cin >> d;
  double a[100];
  a[0] = d;
  for(int i = 1; i < 100; i++){
    a[i] = a[i-1] / 2.0;
  }
  for(int i = 0; i < 100; i++){
    cout << "N[" << i << "] = " << fixed << setprecision(4) << a[i] << endl;
  }
  return 0;
}
