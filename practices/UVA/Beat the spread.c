#include<stdio.h>
int main(){
int i,t,sum,diff,max;
scanf("%d",&t);
for (i=1;i<=t;i++){
scanf("%d %d",&sum,&diff);
max=0;
if(sum<=diff && sum!=0)printf("impossible\n");
else {
    max=(sum+diff)/2;
    if((sum+diff)%2==0)
    printf("%d %d\n",max,sum-max);
    else printf("impossible\n");
}

}
return 0;
}

