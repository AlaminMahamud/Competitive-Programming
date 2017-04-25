#include <bits/stdc++.h>
using namespace std;

int main(){
  for(int i = 1, j = 7; i <= 9; i += 2, j+=2){
    cout << "I=" << i << " J="<<j <<endl;
    cout << "I=" << i << " J="<<j-1 <<endl;
    cout << "I=" << i << " J="<<j-2 <<endl;    
  }
  return 0;
}
