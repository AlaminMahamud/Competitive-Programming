#include <bits/stdc++.h>
using namespace std;

int main(){
  double sum = 0.0;
  for(double i = 1, j = 1; i < 40; i+=2, j*=2){
    sum += (i/j);
  }
  cout << fixed << setprecision(2) << (sum) << endl; 
  return 0;
}
