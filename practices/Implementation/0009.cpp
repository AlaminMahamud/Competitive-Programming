#include <bits/stdc++.h>
using namespace std;

void insertionSort(int *a){
  int pivot = 2;
  int n = sizeof(a)/sizeof(a[0]);
  for(int index = pivot + 1; index < n; index++){
    for(int i = 0; i < index; i++){
      if(a[i] > a[index])
	{
	  a[i] = a[i] ^ a[index];
	  a[index] = a[i] ^ a[index];
	  a[i] = a[i] ^ a[index];
	}
    }
  }
}

void print(int *a){

  int s = sizeof(a)/sizeof(a[0]);
  for(int i = 0; i < s; i++)
    cout << a[i] << endl;
}


int main(){
  int a[] = {1,2,3,4,5,6,7,8,9};
  insertionSort(a);
  print(a);
  return 0;
}
