#include <bits/stdc++.h>
using namespace std;

int main() {
  double N;
  int i = 0;
  double sum = 0;
  cout << fixed << setprecision(2);
  while (cin >> N){
    if (N >= 0.0 && N <= 10.0) {
      i++;
      sum+=N;
      if(i == 2){
        cout << "media = " << sum/2.0 << endl;
        break;
      }
    } else {
      cout << "nota invalida" << endl;
    } 
  }
  return 0;
}
