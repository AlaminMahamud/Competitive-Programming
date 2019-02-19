#include <iostream>
#include <string>

using namespace std;

bool pal(string s){
  int l = s.length();
  for(int i = 0, j = l - 1; i < j; i++, j--){
    if(s[i] != s[j]) return false;
  }
  return true;
}

int main(){
  
  string s;
  int d;

  cin >> s >> d;
  
  int l = s.length();  

  if(d==1) {
    
    if(pal(s)) cout << "YES" << endl;
    else cout << "NO" << endl;
    
  }else if(l%d != 0) 
   
    cout << "NO" << endl;
  
  else{
    
    bool flag = true;
    for(int i = 0; i < l; i += (l / d)) {
        if (!pal(s.substr(i, (l / d) ))) flag = false;
    }
    
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

  }

  return 0;

}
