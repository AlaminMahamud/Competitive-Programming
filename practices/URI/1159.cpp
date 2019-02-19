#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  while(cin >> n && n){
    int i=0;
    int sum = 0;
    while(i<5){
      if(n%2==0) {
        sum += n;
        ++i;
      }
      n++;
    }
    cout << sum << endl;
  }
  return 0;
}
