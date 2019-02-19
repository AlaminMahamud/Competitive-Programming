// we are given an array
// if the element is present
// we return the index
// otherwise return -1
#include <cstdio>

int search(int a[], int n, int x){
  for(int i=0; i<n; i++){
    if(a[i] == x) return i;
  }
  return -1;
}

int main(){
  int a[] = {1,2,3,4,5,10};
  printf("%d\n",search(a,6,2));
}


