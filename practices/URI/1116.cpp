#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  cout << fixed << setprecision(1);
  while (N--) {
    double X, Y;
    cin >> X >> Y;
    if (Y == 0.0) cout << "divisao impossivel" << endl;
    else cout << X / Y << endl;
  }

  return 0;
}
