#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, d;
  cin >> n;
  vector<char> v;
  while(n){
    d = n%16;
    if(d < 10) v.push_back(d+'0');
    else if(d == 10) v.push_back('A');
    else if(d == 11) v.push_back('B');
    else if(d == 12) v.push_back('C');
    else if(d == 13) v.push_back('D');
    else if(d == 14) v.push_back('E');
    else if(d == 15) v.push_back('F');
    n/=16;
  }
  int si = v.size();
  for(int i = si - 1; i > -1; i--)
    cout << v[i];
  cout << endl;
  return 0;
}
