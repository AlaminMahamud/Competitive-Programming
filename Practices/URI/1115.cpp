#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, Y;
  while (cin >> X >> Y && (X!=0 && Y!=0)) {
    if( X > 0 && Y > 0) cout << "primeiro" << endl;
    else if (X > 0 && Y < 0) cout << "quarto" << endl;
    else if (X < 0 && Y < 0) cout << "terceiro" << endl;
    else cout << "segundo" << endl;
  }
  return 0;
}
