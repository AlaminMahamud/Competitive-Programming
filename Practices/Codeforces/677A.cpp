#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int n, h;
  cin >> n >> h;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  sort(a,a+n); h++;
  int L = 0;
  int H = n-1;
  int M;
  int R;
  while(L<H){
    M = (L+H)/2;
    if(a[M] < h) {
      L = M + 1;  
      R = M;
    }
    else H = M - 1;    
  }
  cout << R << endl;
  cout << R + 1 + (n - R - 1) * 2 << "\n";

  return 0;
}
