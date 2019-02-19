#include <bits/stdc++.h>

using namespace std;

int main(){
  
  unsigned long long int ts, tf, t, mini = INT_MAX, time;
  cin >> ts >> tf >> t;

  int n;
  cin >> n;
  
  unsigned long long int a[n];

  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  if(a[0] > 0){
    
    cout << min(a[0] - 1, a[0] + t) << "\n";
  }else if(a[0] == 0){
    unsigned long long int dd = 0;
    for(int i = 1; i < n; i++){
      dd+=t;
      if(a[i] > a[0]){
        cout << min(dd, a[i]-1) << "\n";
      } 
    }
  }else{
    
    for(int i = 1; i < n; i++){
      
      if(a[i] > a[i-1]){
        cout << min(a[i] - 1, a[i-1]+t) << "\n";
      } 
    }
    
  } 

  return 0;
}
