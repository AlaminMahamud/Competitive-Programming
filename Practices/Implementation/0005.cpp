#include <bits/stdc++.h>
using namespace std;

void print(int *a){
  for(int i = 0; i<5; i++)
    cout << a[i] << endl;
}

void func(int val[]){
  int sum = 0;
  for(int i = 0; i < 5; i++){
    val[i] *= val[i];
    sum += val[i];
  }
  printf("%d",sum);
  printf("\n");
}


int main(){

  int a[] = {1,2,3,4,5};
  print(a);
  func(a);
  printf("Contents of array are now : ");
  printf("\n");
  print(a);

  return 0;
}
