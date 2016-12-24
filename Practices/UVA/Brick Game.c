#include <stdio.h>
int main(){
       int t,i,n,j,age,cap=0;
       scanf("%d",&t);
       for (i=1;i<=t;i++){
        scanf("%d",&n);
        for(j=1;j<=n;j++){
            scanf("%d",&age);
            if(j==(n/2+1)) cap=age;
        }
            printf("Case %d: %d\n",i,cap);
       }
return 0;
}
