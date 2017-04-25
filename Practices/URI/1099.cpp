#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n--){
    int sum = 0;
    int a, b;
    cin >> a >> b;
    if (a > b) {
      a = a+b;
      b = a-b;
      a = a-b;
    }
    
    for (int i = a + 1; i < b; i++) {
      if (i % 2 == 1) sum += i;
    }

    cout << sum << endl;
  }
  return 0;
}
