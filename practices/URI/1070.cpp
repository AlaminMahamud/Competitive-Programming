#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  int j = 0;
  for(int i = x; ; i++){
    
    if(i%2==1) {
      j++;
      cout << i << endl;
      if ( j == 6) break;
    }
  }
  return 0;
}
