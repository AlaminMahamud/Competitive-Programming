#include <iostream>
using namespace std;

int f91(int N){
  int val = 0;
  if(N <= 100) val = f91(f91(N+11));
  else if( N >= 101) val = N-10;
  return val;
}

int main(){
  int n;
  while(cin >> n && n){
    cout << "f91("<<n<<") = "<< f91(n) << endl;
  }  
  return 0;
}
