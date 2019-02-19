#include <bits/stdc++.h>
using namespace std;

int main(){
  int A;
  int M = -1;
  int H = 0;
  for (int i = 0; i < 101; i++) {
    cin >> A;
    if (A > M) {
      M = A; H = i+1;
    }
  }
  cout << M << endl << H << endl;
  return 0;
}
