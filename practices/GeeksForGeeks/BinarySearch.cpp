#include <iostream>
int main(){
  
  int n;
  std::cin >> n;
  
  int a[] = {1,2,3,4,5,6,7};
  int H = 6;
  int L = 0;
  int M ;
  while(L<=H){
    M = (L + H)/2;
    if(a[M] == n){
      break;
    }
    if(n < a[M]) H = M-1;
    else L = M+1;
  }
 std::cout << M << std::endl;
 return 0;
}
