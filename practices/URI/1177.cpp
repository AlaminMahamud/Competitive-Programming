#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  for(int i = 0; i < 1000;){
    for(int j = 0; j < n; j++){
      cout << "N[" << i++ <<"] = " << j << endl;
      if(i>999)break;
    }
  }
  return 0;
}
