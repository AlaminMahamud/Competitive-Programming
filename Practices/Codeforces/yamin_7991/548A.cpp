#include <iostream>
#include <string>

bool ok(const std::string s ){
  
  int length = s.size();
  
  for(int i=0,j=length-1;i>j; i++,j--){
    if(s[i] != s[j]) return false;
  }
  
  return true;

}

int main(){
  std::string s;
  std::cin >> s;
  int a;
  std::cin >> a;
  int Length = s.size();
  
  for(int i=0; i<Length; i++){
    
  }
  
  return 0;
}
