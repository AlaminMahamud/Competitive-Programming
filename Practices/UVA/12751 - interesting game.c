#include<stdio.h>
int main(){
int i,j,k,x,n,t,a[9999],sum;
scanf("%d",&t);
for(i=1;i<=t;i++){
        scanf("%d %d %d",&n,&k,&x);
for(j=1;j<=n;j++){
        a[j]=j;
}
for(j=x;j<(x+k);j++){
        a[j]=0;
}
sum=0;
for(j=1;j<=n;j++){
        sum+=a[j];
}
printf("Case %d: %d\n",i,sum);
}



return 0;
//}
//
//
//#include<stdio.h>
//int main(){
//int i,t,j,x,k,n,sum;
//scanf("%d",&t);
//for(i=1;i<=t;i++){
//    scanf("%d %d %d",&n,&k,&x);
//    n=(n*(n+1))/2;
//    sum=0;
//    for(j=x;j<x+k;j++){
//        sum+=j;
//    }
//    printf("Case %d: %d\n",i,n-sum);
//}
//
//return 0;
//}

