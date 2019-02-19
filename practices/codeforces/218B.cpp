#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[1002];
int b[1002];

int i_max(){
  int p = n;
  int ma = 0;
  while(p>0){
    int maxi = 0;
    int maxii = 0;
    for(int i = 0; i < m; i++){
      if(a[i] > maxi && a[i] > 0) {
	maxi = a[i]; maxii = i;
      }
    }

    a[maxii]--;
    ma+=maxi;
    p--;
  }
  return ma;
}

int i_min(){
  int p = n;
  int ma = 0;
  while(p>0){
    int maxi = 1000;
    int maxii = 1000;
    for(int i = 0; i < m; i++){
      if(b[i] < maxi && b[i] > 0) {
	maxi = b[i]; maxii = i;
      }
    }

    b[maxii]--;
    ma+=maxi;
    p--;
  }
  return ma;

}

int main() {

  cin >> n >> m;

  for(int i = 0; i < m; i++){
    int d;
    cin >> d;
    a[i] = b[i] = d;
  }
  
    
  cout << i_max() << " " << i_min() << endl; 

  return 0;
}
