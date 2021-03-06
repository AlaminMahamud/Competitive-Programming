#include <bits/stdc++.h>
using namespace std;

#define REP(i,m) for(int i = 0; i < m; i++)
#define isvalid(i,j,m,n) i >= 0 && i < m && j >= 0 && j < n

int m,n;
char c[105][105];

int dx[] = {-1, -1, -1,  0,  0, +1, +1, +1};
int dy[] = {-1,  0, +1, -1, +1, -1,  0, +1};

int val(int i, int j){
  int mm = 0;
  REP(k ,8){
    int ii = i + dx[k];
    int jj = j + dy[k];
    if(isvalid(ii,jj,m,n) && c[ii][jj] == '*') mm++;
  }
  return mm;
}

int main(){

  freopen("out.txt", "w", stdout);
  
  int i = 1;
  while(1){

    cin >> m >> n;
    if (m == 0 && n ==0)break;
        if(i!=1)
      cout << endl;
    REP(k,m){
      REP(l,n){
	cin >> c[k][l];
      }
    }
    cout << "Field #"<<i++<<":\n";
    REP(k,m){
      REP(l,n){
	if(c[k][l] == '*')cout << '*';
	else{
	  cout << val(k,l);
	}
      }
      cout << "\n";
    }
   
  }
  return 0;
}
