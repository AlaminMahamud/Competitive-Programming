#include <stdio.h>
int main(){
      int t,i,n,k,p;
      scanf("%d",&t);
      for (i=1;i<=t;i++) {
        scanf("%d %d %d",&n,&k,&p);
        while(p!=0){
               k++;
               p--;
               if(k>n) k=1;
        }
        printf("Case %d: %d\n",i,k);
      }
return 0;
}
