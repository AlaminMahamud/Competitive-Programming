#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){

  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
  
}
			

int main(){
  int a[] = {1,2,3,4,5,6,7,8,1,2,3,4,5,6,7,8};
  int n = sizeof(a)/sizeof(a[0]);
  for(int j = 1; j < n; j++){

    for(int i = 0; i < j; i++){

      if(a[j] < a[i]) swap(&a[j],&a[i]);

    }

  }

  for(int i = 0; i < n; i++)
    cout << a[i] << endl;
  
  return 0;
}
