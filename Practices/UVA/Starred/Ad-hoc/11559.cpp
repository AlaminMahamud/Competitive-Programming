#include <bits/stdc++.h>
using namespace std;

int main(){

  while(cin){
    int N, B, H, W;
    cin >> N >> B >> H >> W;
    int PP;
    int MAX = 100000000;
    for(int i = 1; i <= H; i++){
      cin >> PP;
      bool flag = false;
      for(int j = 1; j <= W; j++){
	int d;
	cin >> d;
	if(d >= N) {flag = true;}
      }
      
      if(flag){
	MAX = min(PP*N, MAX);
      }
    }

    //cout << MAX<< endl;
    if(MAX<=B)cout << MAX << endl;
    else cout << "stay home" <<endl;
  }
  return 0;
}
