#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int sum = 0;
  while(getline(cin,s)){
    
    if(s == "caw caw"){
      cout << sum << endl;
      sum = 0;
    }
    else{
      
      for(int i = 2; i > -1; i--){
	if(s[i] == '*')sum += pow(2,2-i);
      }
       
    }
  }
  return 0;
}
