#include <iostream>
using namespace std;

int n, h, k;
unsigned long long int current = 0;

int main(){  
  cin >> n >> h >> k;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];   
  } 
  
  int t = 0;
  int last = -1;
  while(true){
    if(a[n-1] == -1 && current <= 0) break;      
    
      for(int i = last + 1; i < n; i++){      
        if(a[i] > 0){
          if(a[i] + current <= h) {
            current += a[i];
            a[i] = -1;
            last = i;            
          }else break;
        }
      }
         
    if(current<k) {
      current = 0; t++;
    }
    else{
      t += (current / k);
      current = current % k;  
    }
    
    //cout << current << " => " << t << endl;
     
  }

  cout << t << endl;
  return 0;
}
