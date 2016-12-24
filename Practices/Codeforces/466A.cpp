#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

int main(){
    int n,m,op,mp;
    cin >>n>>m>>op>>mp;
    if(n==1 && op < mp) cout << op << endl;
    else if(n==1 && op >= mp) cout << mp << endl;
    else if(m*op<mp) cout <<n*op<<endl;
    else if(m*op>=mp) cout << (n/m)*mp + (n%m)*op <<endl;

    return 0;
}

