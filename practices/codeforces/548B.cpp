#include <iostream>

using namespace std;

int main(){
  
  int n, m, q;
  cin >> n >> m >> q;
  bool a[n][m];
  int b[n];

  for(int i = 0; i < n; i++){
    b[i] = 0;
  }

  for(int i = 0; i < n; i++){
    
    for(int j = 0; j < m; j++){
      
      int d;
      cin >> d;
      if(d == 0) a[i][j] = false;
      else {
        a[i][j] = true; 
        b[i]++;
       }
    }

  } 


  for(int i = 0; i < q; i++){
    

 
      int p, r;
      cin >> p >> r;
      p--; r--;
 
      if(a[p][r] == false) {
        a[p][r] = true;
        b[p]++;
      }
      else {
        a[p][r] = false; b[p]--;
      }
      
      int aa,max;
      
      aa = 0;
      max = -1;
 
      for(int k = 0; k < n; k++){   
        aa = b[k];
        if(max < aa) max = aa;
      }
    
    cout << max << endl;

  }

  return 0;

}
