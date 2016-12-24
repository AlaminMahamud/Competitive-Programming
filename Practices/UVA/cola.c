#include<stdio.h>
int main(){
    int n,e,a,l;
    while(scanf("%d",&n)!=EOF){
            e=0;a=0;l=0;
        while(n!=0){

           if(a!=0 && a>l){a-=l;l=0;if(a==3){a=0;n++;e+=a;}else{a=0;e+=a;}}
           if(n==1){e++;n=0;}
           if(n%3==0){
            e=n+e;
            n/=3;
           }
           else if((n+1)%3==0){
            e=e+n;
            n=(n+1)/3;
            l++;
           }
           else {
            e=n+e;
            n=(n-1)/3;
            a++;
           }
        }
        printf("%d\n",e);

    }
return 0;
}
