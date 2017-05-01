#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;

  while(cin >> n){
    int M[n][n];
    bool B[n][n];
    memset(M, 0, sizeof(M));
    memset(B, false, sizeof(B));
    for(int i = 0; i < n; i++){
      M[i][i] = 1;
      B[i][i] = true;
    }
    for(int j = n-1, i = 0; j > -1 ; j--, i++){
      M[j][i] = 2;
      B[j][i] = true;
    }
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
	if(!B[i][j]) M[i][j] = 3;
	cout << M[i][j]; 
      }
      cout << endl;
    }

    
  }

  return 0;
}
