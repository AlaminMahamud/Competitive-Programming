#include<stdio.h>

int main(){
short int a,b,c;
while(scanf("%d %d %d")!=EOF){
        if(a==b && b==c) printf("*\n");
        else if (a!=b && b==c) printf("A\n");
        else if(a!=c && b==a)  printf("C\n");
        else if(b!=c && a==c)  printf("B\n");
}
return 0;
}
