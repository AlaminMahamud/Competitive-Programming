#include <bits/stdc++.h>
using namespace std;

int main() {
  double d;
  for(int i = 0; i < 100; i++){
    cin >> d;
    if(d <= 10.0)
      cout << "A[" <<i<<"] = "<<fixed << setprecision(1) << d << endl;
  }
  return 0;
}
