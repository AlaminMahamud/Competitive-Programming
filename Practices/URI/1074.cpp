#include <bits/stdc++.h>
using namespace std;

int main(){
  int X,Y;
  cin >> X;
  int a;
  for(int i = 1; i <= X; i++){
    cin >> a;
    if(a == 0) cout << "NULL" << endl;
    else if(a < 0 ) {
      if( abs(a) % 2 == 0) cout << "EVEN NEGATIVE" << endl;
      else cout << "ODD NEGATIVE" <<endl;
    }else{
      if( abs(a) % 2 == 0) cout << "EVEN POSITIVE" << endl;
      else cout << "ODD POSITIVE" <<endl;
    }
  }
  return 0;
}
