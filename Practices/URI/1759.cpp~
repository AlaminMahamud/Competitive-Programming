#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  
  while(cin>>n && n){
    long long int M[n][n];
    

    for(int j = 0, k = 1; j < n; j++, k*=2){
      M[0][j] = k;
    }
      
    for(int i = 1; i < n; i++){
      for(int j = 0; j < n; j++){
	M[i][j] = M[i-1][j] * 2;
      }
    }

    int T = M[n-1][n-1];

    if (T < 10) T = 1;
    else if (T < 100) T = 2;
    else if (T < 1000) T = 3;
    else if (T < 10000) T = 4;
    else if (T < 100000) T = 5;
    else if (T < 1000000) T = 6;
    else if (T < 10000000) T = 7;
    else if (T < 100000000) T = 8;
    else if (T < 1000000000) T = 9;

    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
	if(j!=0) cout << " ";
	cout << right << setw(T) << M[i][j];
      }
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}
