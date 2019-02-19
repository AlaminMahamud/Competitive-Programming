#include <iostream>
#include <cstdio>
#include <string>
#define si(t) scanf("%d",&t)
using namespace std;
int main(){
    int t;
    si(t);
    while(t-->0){
        string s;
        cin >> s;
        int siz = s.size();
        if(s=="1" || s=="4" || s=="78") cout << "+" <<endl;
        else if (s[siz-2] == '3' && s[siz-1]=='5') cout << "-" <<endl;
        else if (s[0] == '9' && s[siz-1]=='4') cout << "*" <<endl;
        else if(s[0]=='1' && s[1] == '9' && s[2]=='0') cout << "?" <<endl;
    }

    return 0;
}
