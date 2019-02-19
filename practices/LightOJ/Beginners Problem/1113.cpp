#include <iostream>
#include <stack>

int main(){
  int test;
  std::cin >> test;
  for(int i=1; i<=test; i++){
    std::string print,s,current;
    std::stack<std::string> f,b;
    while(1){
      std::cin>>s;
      if(s=="QUIT") break;
      else if(s=="BACK"){
        if(!b.empty()){
          f.push(current);
          print = current = b.top();
          b.pop();
        }else  print = "Ignored" ;
      }else if(s=="FORWARD"){
        if(!f.empty()){
          b.push(current);
          print = current = f.top();
          f.pop();
        }else print = "Ignored";
      }
      else if(s=="VISIT"){
        if(b.empty()){
          b.push("http://www.lightoj.com/");
        }else
          b.push(current);
        std::cin>>current;
        print = current;
        while(!f.empty()) f.pop();
      }
      std::cout << print << std::endl;
    }
  }

  return 0;
}
