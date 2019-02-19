// In the Name of God
#include<iostream>
using namespace std;

int a[26], b;

int main(){
  string s;
  cin >> s;
  int sl = s.length();
  for(int i = 0; i < sl; i++) a[s[i]-'a']++;
  for(int c=0; c<26; c++) b += a[c]%2;
  if(b%2 || !b) cout << "First" << endl;
  else cout << "Second" << endl;
}
