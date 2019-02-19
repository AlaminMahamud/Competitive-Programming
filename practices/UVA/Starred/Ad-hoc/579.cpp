#include <bits/stdc++.h>
using namespace std;

int main(){

  string s;
  while(cin>>s){
    int hh;
    int mm;
    
    if(s[1] == ':') {
      hh = s[0] - '0';
      mm = (s[2] - '0') * 10 + (s[3] - '0');
      if(s[0] == '0' && s[2] == '0' && s[3] == '0') break;
    }else{
      hh = (s[0] - '0') * 10 + (s[1] - '0');
      mm = (s[3] - '0') * 10 + (s[4] - '0');      
    }

    if(hh==12) hh = 0;

    double hangle = 0.0, mangle = 0.0, angle = 0.0, extra = 0.0;

    hangle = ((double)hh) * 60.0 * 0.5;
    hangle  += ((double)mm) * 0.5;
    mangle = ((double)mm) * 6.0;

    if(hangle>mangle) angle = hangle - mangle;
    else angle = mangle - hangle;
    if(angle > 180.0) angle = 360.0-angle;
 
    printf("%.3lf\n",angle);
  }
  return 0;
}
