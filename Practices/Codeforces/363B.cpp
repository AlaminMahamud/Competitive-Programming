#include <iostream>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;  
  int a[n],b[n-k];
  for(int i = 0; i < n; i++)
    cin >> a[i];
  for(int i = 0; i < (n - k); i++)
    for(int j = i; j < i+k; j++)
      b[i] += a[j];
  int min = 1000000000;
  int mini = -1;
  for(int i = 0; i < n-k; i++){
    if(min > b[i]){
      min = b[i];
      mini = i;
    }
  }
  cout << mini << endl;
  return 0;
}
