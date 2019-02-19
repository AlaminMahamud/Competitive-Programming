#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, p;
  int z = 1;
  while(1){
    cin >> n >> p;
    if(n==0 && p == 0) break;
    string st;
    getline(cin,st);
    vector< proposal > v;
    for(int i = 0; i < n; i++){
      string s;
      getline(cin, s);
      //cout << i << "=>" << s << endl;
    }
    // done p
    //cout << "Done P " <<endl;
    for(int j = 0; j < p; j++){
      string ss;
      double pp;
      int qq;
      getline(cin,ss);
      cin >> pp >> qq;

      for(int ii = 0; ii < qq; ii++){
	string psq;
	if(ii==0)getline(cin,psq);
	getline(cin,psq);
      }
      
      proposal p0;
      p0.s = ss;
      p0.p = pp;
      p0.r = qq;

      v.push_back(p0);

    }
    sort(v.begin(),v.end(),comp());
    cout << "RFP #" << z++ <<endl;
    cout << v[0].s << endl;
    if((z-1)%2!=0){      
      cout << endl;
    }
  }
}
