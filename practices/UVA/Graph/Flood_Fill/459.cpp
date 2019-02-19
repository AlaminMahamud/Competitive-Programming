// COPYRIGHT 2017_RED

#include <bits/stdc++.h>
using namespace std;

bool M[27];

char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
                   'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
                   'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int find(char C) {
  for (int i = 0; i < 26; i++) {
    if (alphabet[i] == C) {
      return i+1;
    }
  }
}

void DFS(int i, vector<int> V[]) {
  M[i] = false;
  int si = V[i].size();
  for (int ii = 0; ii < si; ii++) {
    if (M[V[i][ii]]) {
      DFS(V[i][ii], V);
    }
  }
}

int main(int argc, char *argv[]) {
  int test;
  cin >> test;
  string ss;
  getline(cin, ss);
  getline(cin, ss);
  while (test--) {
    memset(M, true, sizeof(M));
    char NODE;
    cin >> NODE;
    getline(cin, ss);
    int val = find(NODE);
    vector<int> V[27];
    string s;
    while (getline(cin, s) && s.length()) {
      V[find(s[0])].push_back(find(s[1]));
      V[find(s[1])].push_back(find(s[0]));
    }
    int number = 0;
    for (int i = 1; i < val+1; i++) {
      if (M[i]) {
        DFS(i, V);
        number++;
      }
    }

    cout << number << endl;
    if (test) {
      cout << endl;
    }
  }
  return 0;
}



