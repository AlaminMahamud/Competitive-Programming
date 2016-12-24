#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int TC, a, b;
    scanf("%d", &TC);   // number of test cases
    while(TC--){        // shortcut to repeat until 0
        scanf("%d %d", &a, &b); 
        printf("%d\n", a+b);    // on the fly   
    }
}