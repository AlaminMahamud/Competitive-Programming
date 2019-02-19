#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int b[]){
  int as = sizeof(a)/sizeof(int);
  int bs = sizeof(b)/sizeof(int);
  
  int i = 0;
  int j = 0;
  int p = 0;
  int c[as+bs];
  // cout<< as+bs<<endl;
  while(i < as || j < bs){
    // cout << i << " " << j << endl;
    if(i < as && j < bs){
      if(a[i] < b[j]) c[p++] = a[i++];
      else c[p++] = b[j++];
    }
    else if(i >= as) {
      c[p++] = b[j++];
    }else if(j >= bs){
      c[p++] = a[i++];
    }
    
  }

  for(int k = 0; k < as+bs; k++)
    cout << c[k] << endl;
}

int main(){
  int a[] = {10, 20, 30, 40};
  int b[] = {11, 19, 31, 39};
  //  cout << sizeof(a) << endl;
  merge(a,b);
  return 0;
}
