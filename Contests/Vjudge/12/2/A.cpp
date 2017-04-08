#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, L;
  cin >> n >> L;
  int a[n], b[n];
  bool c[n];
  memset(c,false, sizeof(c));
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int i = 0; i < n; i++){
    cin >> b[i];
  }
  int p = a[0];
  for(int i = 0; i <= n-2; i++){
    a[i] = a[i+1] - a[i];
  }
  
  a[n-1] = (p + L) - (a[n-1]);

  int q = b[0];
  queue<int> qq;
  
  for(int i = 0; i <= n-2; i++){
    qq.push( b[i+1] - b[i]);

  }

  qq.push(b[n-1] = (q + L) - b[n-1]);

  bool f = true;
  for(int i = 0; i < n && f; i++){
    if(a[i] != qq.front()){
      int d = qq.front();
      qq.pop();
      qq.push(d);
    }else{
       f = true;
      for(int i = 0; i < n; i++){
	if(a[i] == qq.front()){
	  qq.pop();
	}else{
	  f =false;
	  break;
	}
      }
    }
  }
	 
  if(f) cout << "YES" <<endl;
  else cout << "NO" <<endl;
  return 0;
}
