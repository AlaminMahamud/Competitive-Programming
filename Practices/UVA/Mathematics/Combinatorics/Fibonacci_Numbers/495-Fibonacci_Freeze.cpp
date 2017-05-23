#include <bits/stdc++.h>
using namespace std;

map<int, string> m;

string addS(string s2, string s1){

  string s="";

  int s1l = s1.length();
  int s2l = s2.length();

  int carry = 0;

  for(int i = 0; i < s2l; i++){

    int s1n = 0;
    if(i<s1l)
    s1n = s1[i] - '0';
    int s2n;
    s2n = s2[i] - '0';

    int sn = s1n + s2n + carry;
    carry = 0;

    if(sn < 10)
      s += (sn + '0');
    else{
      s += (sn - 10 + '0');
      carry = 1;
    }
  }
  if(carry==1)
    s+='1';

  return s;

}

void compute(){
  m[0] = "0";
  m[1] = "1";

  for(int i = 2; i < 5001; i++)
    m[i] = addS(m[i-1], m[i-2]);
}
int main(){
  compute();
  int t;
  while(cin >> t){
    cout << "The Fibonacci number for " << t <<" is ";
    string sst = m[t];
    int len = sst.length();
    for(int i = len-1; i>-1; i--){
      cout <<sst[i];
    }
    cout << endl;
  }
  return 0;
}
