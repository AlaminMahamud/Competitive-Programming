#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    unsigned int n,x=0,p=23-4+1;
    
    x=~x;

    for(int i = 0; i < p; i++){
        x = (x << 1);
    }

    for(int i = 0; i < 4; i++){
        x = (x << 1) | 1;
    }

    while(scanf("%d",&n)!=EOF)
    {
        cout << (n & x) << endl;
    }

    return 0;
}