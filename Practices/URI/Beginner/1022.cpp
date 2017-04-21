// COPYRIGHT 2017_RED

#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a%b);
}


int main(int argc, char *argv[]) {
  int N;
  cin >> N;
  while (N--) {
    int N1, D1, N2, D2;
    char dc;
    char cc;
    cin >> N1 >> cc >> D1 >> dc >> N2 >> cc >> D2;
    int a, b;
    switch (dc) {
      case '+' :
        a = N1 * D2 + N2 * D1;
        b = D1 * D2;
        break;
      case '-' :
        a = (N1*D2 - N2*D1);
        b = D1 * D2;
        break;
      case '*' :
        a = N1 * N2;
        b = D1 * D2;
        break;
      case '/' :
        a = N1 * D2;
        b = N2 * D1;
        break;
    }

    int c = gcd(abs(a), abs(b));
        cout << a << "/" << b << " = " << a/c << "/" << b/c << endl;
  }
  return 0;
}
