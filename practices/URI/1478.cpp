#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  while(cin >> n && n){
    int M[n+1][n+1];
    n++;
    for(int i = 1; i < n; i++){
      int p = 0;
      for(int j = i; j < n; j++){
	M[i][j] = p+1;
	M[j][i] = p+1;
	p++;
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
