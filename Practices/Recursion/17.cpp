#include <bits/stdc++.h>

using namespace std;

bool isalnumm(char c){
  if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) return true;
  return false;
}

bool rec(int L, int H, string &s){
  if(L > H) return true;
  if(!isalnumm(s[L]) && !isalnumm(s[H])) rec(L+1, H-1, s);
  else if(!isalnumm(s[L]) rec(L+1, H, s);
  else if(!isalnumm(s[H]) rec(L, H-1, s);
	  else{
	    if(s[L] == s[H]) rec(L+1, H-1, s);
	    else return false;
	  }
}

   int main(){
  string s;
  cin >> s;
  int length = s.length();
  cout << rec(0, length-1, s) << endl;
  
  return 0;
}
