// COPYRIGHT 2017_RED

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

bool M[10005];
int total = 0;

int DFS(int NODE, vector<int> V[]) {
  int to = 1;
  M[NODE] = false;
  int size = V[NODE].size();
  for (int i = 0; i < size; i++) {
    if (M[V[NODE][i]]) {
      to += DFS(V[NODE][i], V);
    }
  }
  return to;
}

int main(int argc, char *argv[]) {
  int test;
  cin >> test;
  while (test--) {
    total = 0;
    memset(M, true, sizeof(M));
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> V[n+1];
    REP(i, m) {
      int a, b;
      cin >> a >> b;
      V[a].push_back(b);
    }
    REP(i, k) {
      int z;
      cin >> z;
      if (M[z])
        total += DFS(z, V);
    }
    cout << total << endl;
  }
  return 0;
}
