#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  while (cin >> a >> b && (a > 0 && b > 0)) {
    if (a > b) {
      a = a+b;
      b = a-b;
      a = a-b;
    }
    int d = b;
    b++;
    int s = 0;
    for (int i=a; i < b; i++) {
      s += i;
      cout << i << " ";
      if(i == d) {
	cout << "Sum=" << s <<endl;
	break;
      }
    }
  }
  return 0;
}
