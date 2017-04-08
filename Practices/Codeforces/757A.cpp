#include <iostream>
#include <string>
#include <unordered_map>

int main(){

  std::string s;
  std::cin >> s;
  std::unordered_map<char, int> u;
  u.clear();
  u['B'] = u['u'] = u['l'] = u['b'] = u['a'] = u['s'] = u['r'] = 0;
  int length = s.size();
  for(int i = 0; i < length; i++){    
    u[s[i]]++;
  }

  int c = u['B'];
  int d = c * 2;
  
  while(c>0){
    if(u['u'] >= d && u['l'] >= c && u['b'] >= d &&  u['a'] >= d && u['s'] >= c && u['r'] >= c )  break;
    c--;
  }
  
  std::cout << c << std::endl;
  return 0;

}
