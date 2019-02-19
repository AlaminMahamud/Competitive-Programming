/*
ID: alamin.2
PROG: test
LANG: C++11
*/

#include <cstdio>
using namespace std;

int main(){
    int a,b;

    freopen("test.in", "r", stdin);
    freopen("test.out", "w", stdout);

    while(scanf("%d %d", &a, &b)!=EOF)
       printf("%d\n", a + b);

    return 0;
}