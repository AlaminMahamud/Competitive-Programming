#include<stdio.h>
int main(){
       short int l,i;
    long long int a[51];
    while(scanf("%d",&l)!=EOF){
        if(l<=0){
            break;
        }
        else if(l==1){
                a[1]=1;
                printf("1\n");
        }
        else if(l==2){
            a[2]=2;
            printf("2\n");
        }
        else if(l==3){
            a[3]=3;
            printf("3\n");
        }
        else{
            a[1]=1;
            a[2]=2;
            a[3]=3;
            for(i=4;i<=l;i++){
                a[i]=a[i-1]+a[i-2];
            }
            printf("%lld\n",a[l]);
        }
}
return 0;
}
