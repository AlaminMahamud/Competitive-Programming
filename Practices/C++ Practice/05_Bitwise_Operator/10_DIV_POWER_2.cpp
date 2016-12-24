#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n,b;
    while(scanf("%d %d",&n, &b)==2)
    {
        cout << "mod" <<endl<< (n & ((1 << b)-1)) <<endl;
        cout << "div" <<endl<< (n >> b) <<endl;
        cout << "mul" <<endl<< (n << b) <<endl;
    }
}