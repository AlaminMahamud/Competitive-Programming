#include <iostream>
int main(){
  int a;
  std::cin>>a;
  int arr[] = {1,2,3,4,5,6,7};
  bool flag = false;
  for(int i=0; i<7;i++){
    if(a==arr[i]){ 
      std::cout << "found at=>" << i + 1 << std::endl;
      flag = true;
      break;
    }
  }
  if(flag==false){
    std::cout << "is not there" << std::endl;
  }
}
