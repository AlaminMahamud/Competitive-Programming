#include <bits/stdc++.h>
using namespace std;

int main(){
  for(double i = 0, j = 1; i <= 2; i += .2, j+= .2){
    cout << "I=" << i << " J="<<j <<endl;
    cout << "I=" << i << " J="<<j+1 <<endl;
    cout << "I=" << i << " J="<<j+2 <<endl;    
  }
  return 0;
}
