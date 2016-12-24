#include<stdio.h>
int main(){
    int n,e;
while(scanf("%d",&n)!=EOF){
   if(n==0)break;
   e=0;
   while(n!=0){

        e=n/3+e;
        n=(n/3)+(n%3);

        if(n==2){
            e=e+1;
            n=0;
        }
        if(n==1){
            n=0;
        }
   }
    printf("%d\n",e);
}

return 0;
}
