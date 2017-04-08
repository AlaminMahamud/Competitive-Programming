#include <bits/stdc++.h>

#define valid(nx,ny,n,m) nx >= 0 && nx < n && ny >= 0 && ny < m
#define  REP(i,n) for(int i = 0; i < n; i++)

using namespace std;


int n, m;
char c[105][105];
bool mark[105][105];

  int dx[] = { +1, +1, +1,  0, 0, -1, -1, -1};
  int dy[] = { +1,  0, -1, +1, -1, +1,  0, -1};

void dfs(int p, int q){

  int nx, ny;
  mark[p][q] = false;
  REP(k, 8){
    nx = p + dx[k];
    ny = q + dy[k];
    if(valid(nx, ny, n, m)){
      if(mark[nx][ny] && c[nx][ny] == '@')
	dfs(nx,ny);
    }
  }    
}  



int main(){
  while(1){
  cin >> n >> m;
  if(n==0 && m ==0) break;
  REP(i,n){
    REP(j,m){
      cin >> c[i][j];
    }
    //cout << c[i] << '0'<<endl;
  }
  int count = 0;
  memset(mark, true, sizeof(mark));
  REP(i,n){
    REP(j,m){
          if(mark[i][j] && c[i][j] == '@')
	  {
	    dfs(i, j);
	    count++;
	  }
    }
  }

  cout << count << endl;
  }
  return 0;
}
