#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  cout << fixed << setprecision(1);
  for(int i = 0; i < N; i++){
    double A, B, C;
    cin >> A >> B >> C;
    cout << (A*2.0 + B*3.0 + C*5.0) / 10.0 << endl;
  }
  return 0;
}
