#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
 
  bool b[n+1];

  memset(b,false,sizeof(b));
  
  int d;
  int j = n;
  
  for(int i = 0; i < n; i++){
    cin >> d;
    b[d] = true;
    
    if(d == j) {
      int jj = 0;
      while(b[j]){
        if(jj != 0) cout << " ";
        cout << j;
        j--;
        jj++;
      }
      
    }
    
    cout << "\n";
  }
  
 
  return 0;
}
