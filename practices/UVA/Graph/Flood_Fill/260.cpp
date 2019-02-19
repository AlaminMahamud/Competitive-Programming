#include <bits/stdc++.h>

#define REP(i,n) for(int i = 0; i < n; i++)
#define mem(a,b) memset(a,b,sizeof(a));
#define valid(nx,ny,n) nx >= 0 && ny >= 0 && nx < n && ny < n
using namespace std;

int n;
char G[205][205];
bool M[205][205];
bool BR[205];
bool BC[205];
bool WR[205];
bool WC[205];

int dx[] = {-1,-1,0,0,+1,+1};
int dy[] = {-1,0,-1,+1,0,+1};

void dfs(int i, int j, char c){
  M[i][j] = false;
  if(c=='b'){
	BR[i] = true;
	BC[j] = true;
  }else{
    WR[i] = true;
    WC[j] = true;
  }
  REP(k,6){
    int nx = i + dx[k];
    int ny = j + dy[k];
    if(valid(nx,ny,n) && M[nx][ny] && G[nx][ny] == c) {
      dfs(nx,ny,c);
    }
  }

}

int main(){
  int zz = 0;
  while(cin >> n && n){    

    mem(M,true);

    
    REP(i,n)
      REP(j,n)
      cin >> G[i][j];
    
    REP(i,n){
      REP(j,n){
	    mem(BR,false);
	    mem(BC,false);
	    mem(WR,false);
	    mem(WC,false);
	    if(G[i][j] == 'b' && M[i][j]) dfs(i,j,'b');
	    else if(G[i][j] == 'w' && M[i][j]) dfs(i,j,'w');
      }
    }
   
    cout << ++zz << " ";
    bool black_r = true, black_c = true, white_r=true,white_c =true;
    REP(i,n){
      if(BR[i] == false) black_r = false;
      else if(BC[i] == false) black_c = false;
      else if(WR[i] == false) white_r = false;
      else if(WC[i] == false) white_c = false;
    }

    if(white_r || white_c) cout << "W";
    else if(black_r || black_c) cout << "B";
    
    cout << endl;

  }
  
  return 0;
}
