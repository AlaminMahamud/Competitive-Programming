#include <cstdio>
using namespace std;

int N; // using global variables in contest can be a good strategy
char x[110]; // make it a habit to set the array size a bit larger than needed.

int main(){
    scanf("%d", &N);
    while(N--){                     // we simply loop from N,
        scanf("0.%[0-9]...",&x);    // '&' is optional when  x is a char array.
        printf("the digits are 0.%s\n",x);
    }
    //return 0;
}