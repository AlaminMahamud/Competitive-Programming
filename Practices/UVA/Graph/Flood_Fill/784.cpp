// COPYRIGHT 2017_RED

#include <bits/stdc++.h>
#define isvalid(nx, ny, row, col) nx >= 0 && nx < row && ny >= 0 && ny < col
using namespace std;

// Grid
char grid[35][87];
bool visit[35][88];
int row = 0, col = 0;

int dx[] = {-1, 0, +1,  0};
int dy[] = { 0, +1, 0, -1};

void dfs(int i, int j) {
  grid[i][j] = '#';
  visit[i][j] = false;
  for (int k = 0; k < 4; k++) {
    int nx = i + dx[k];
    int ny = j + dy[k];
    if (isvalid(nx, ny, row, col) && grid[nx][ny] == ' ' && visit[nx][ny])
      dfs(nx, ny);
  }
}


int main() {
  int zz;
  cin >> zz;
  string ss;
  getline(cin, ss);
  while (zz--) {
    int i_index, j_index;
    row = col = 0;
    memset(grid, '\0', sizeof(grid));
    memset(visit, true, sizeof(visit));
    int sep = 0;
    for (int i = 0; i < 35; i++) {
      row = i;
      string s;
      getline(cin, s);
      if (s[0] == '_') {
        sep = s.length();
        break;
      }
      int length = s.length();
      for (int j = 0; j < length; j++) {
        if (s[j] == '*') {
          i_index = i;
          j_index = j;
        }
        grid[i][j] = s[j];
        col = max(col, j);
      }
    }
    dfs(i_index, j_index);

    for (int i = 0; i < row; i++) {
      int j = 0;
      while (grid[i][j] != '\0')
        cout << grid[i][j++];
      cout <<endl;
    }
    for (int i = 0; i < sep; i++)
      cout << '_';
    // if (zz)
      cout << endl;
  }
  return 0;
}
