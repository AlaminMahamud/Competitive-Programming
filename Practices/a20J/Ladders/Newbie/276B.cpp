#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  map<char,int> m;
  int length = s.length();
  for(int i = 0; i < length; i++){
    m[s[i]]++;
  }
  int odds=0;
  for(map<char,int> :: iterator it = m.begin(); it != m.end(); it++){
    if(it->second % 2 == 1) odds++;
  }
  int  j = 1;

  while(true){
    if(length % 2 == 1){
      if(odds == 1) break;
      else odds--;
    }
    else{
      if(odds == 0) break;
      else odds--;
    }
    length--;
    j++;
  }

  if(j%2 == 1) cout << "First" << endl;
  else cout << "Second" << endl;
  return 0;
}
