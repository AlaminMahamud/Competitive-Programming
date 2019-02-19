#include <bits/stdc++.h>
using namespace std;

int main(){
  double N;
  double sum = 0;
  int i = 0;
  while(cin >> N && N>=0){
    sum += N;
    i++;
  }
  cout << fixed << setprecision(2) << (sum/i) << endl;
  
  return 0;
}
