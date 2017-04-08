#include <iostream>
using namespace std;

int main(){
  int n,h,k;  
  cin >> n >> h >> k;  
  int a[n];

  for(int i = 0; i < n; i++){
    int d;
    cin >> d;
    a[i] = d;
  }
  
  int current = 0;

  for(int i = 0; i < n; i++){
    if(current + a[i] <= h) {
      current += a[i];
      a[i] = 0;
    }
  }
  
  while(current){
    if(current <= k){
      current = 0;
      time++;
    }else{
      current -= k;
    }
  } 

  cout << endl;
    
  return 0;
}
