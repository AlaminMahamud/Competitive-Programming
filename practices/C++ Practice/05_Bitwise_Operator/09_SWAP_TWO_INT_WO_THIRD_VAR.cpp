#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int a,b;
    while(scanf("%d %d",&a, &b)==2)
    {
        a = a^b;
        b = a^b;
        a = a^b;

        cout << endl << a << "\t" <<b;
    }
}