#include <bits/stdc++.h>
using namespace std;

bool prime(int j, int n, int i)
{
  if(j > i) {
    return false;
  }
  if(n % i == 0 ) return true;
  prime(j + 1, n, i);
}


int main(){
  int n;
 
  while(true){
    cin >> n;
    if( n == 0) break;
    else if(n == 1) cout << "Non Prime" << endl;
    bool f = prime(2,n,sqrt(n));
    cout << f << endl;
  }
  
  return 0;
}
