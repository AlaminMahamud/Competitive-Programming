#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  while(cin >> n && n){
    int M[n+1][n+1];
    n++;


    for(int z = 1; z < n; z++){
      for(int i = z; i <= n-z; i++){
	for(int j = z; j <= n-z; j++){
	  M[i][j] = z;
	}
      }
    }
    
    for(int i = 1; i < n; i++){
      for(int j = 1; j < n; j++){
	if(j!=1)cout << " ";
	cout << right << setw(3) << M[i][j];
      }
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}
