#include <bits/stdc++.h>
using namespace std;

int main(){
  int a[] = {1,2,3,4,5,6,7,8,9,0};
  for(int i = 0, j = 9; i <= j; i++, j--){
    cout << i << "=>" << j << endl;
    a[i] = a[i]^a[j];
    a[j] = a[i]^a[j];
    a[i] = a[i]^a[j];
  }
  cout << a[0];
  for(int i = 1; i < 10; i++)
    cout << " " << a[i];
  cout << a << " => " << b << endl;
  return 0;
}
