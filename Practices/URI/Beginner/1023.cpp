// COPYRIGHT 2017_RED

#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;


int main(int argc, char *argv[]) {
  int n;
  int i = 1;
  while (cin >> n && n) {
    int64 sum = 0;
    int64 total = 0;
    vector< pair<int, int> > vii;
    int p = n;
    while (p--) {
      int x, y;
      cin >> x >> y;
      sum += x;
      total += y;
      vii.push_back(make_pair(x, static_cast<int>(floor(static_cast<double>(y/x)))));
    }
    sort(vii.begin(), vii.end());
    if (i != 1) cout << endl;
    cout << "Cidade# "<< i++ << ":" << endl;
    int size = vii.size();
    for (int i = 0; i < size; i++) {
      cout << vii[i].first << "-" << vii[i].second;
      if ( i < size - 1)
        cout << " ";
      else if cout << endl;
    }
    cout << fixed << setprecision(2);
    cout << "Consumo medio: " << static_cast<double>(total/sum) << " m3.";
    cout << endl;
  }
  return 0;
}
