#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int a;
    while(scanf("%d",&a)!=EOF)
        if(!(a&(a-1)))
            cout << true << endl;
}