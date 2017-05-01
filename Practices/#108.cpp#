#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i = 0; i < n; i++)
int main(){

  int N;
  cin >> N;
  int a[N][N];
  
  REP(i,N)
    REP(j,N)
      cin >> a[i][j];

  int maxx = -100000;

  REP(i, N){
    REP(j, N){
      int sum = 0;
      REP(k, i+1){
	REP(l, j+1){
	  sum += a[k][l];
	}
      }
      maxx = max(sum,maxx);
    }
  }

  cout << maxx << endl;
  return 0;
}
