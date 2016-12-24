#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int TC, a, b;
 
 // Typical Procedures for multiple test cases
 // Step - 1

    scanf("%d", &TC);   // number of test cases
    while(TC--){        // shortcut to repeat until 0
        scanf("%d %d", &a, &b); 
        printf("%d\n", a+b);    // on the fly   
    }

 // Step - 2
 int a,b;
 // stops when both integers are zero
 while(scanf("%d %d", &a, &b), (a||b))
    printf("%d\n", a+b);

 // Step - 3
 int a,b;
 // scanf returns the number of items read
 while(scanf("%d %d", &a, &b) == 2)
 // or you can check for EOF, i.e.
 //while(scanf("%d %d", &a, &b) != EOF)
    printf("%d\n", a+b);
 }