#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(){
    int d;
    string s;
    while(scanf("%d %[0-9]", &d,s) !=EOF ){
        if(d==0 && s=="0"){
            break;
        }else{
            printf("%s",s);
        }
    }

}

