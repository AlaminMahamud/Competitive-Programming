#include <stdio.h>
int main(){
int n,t,a[10000],max,i,j;
scanf("%d",&t);
for(j=1;j<=t;j++){
    max=0;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
        if (a[i]>=max) max=a[i];
    }
    printf("Case %d: %d\n",j,max);
}
return 0;
}
