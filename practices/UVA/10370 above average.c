#include <stdio.h>
int main(){

int c,i,n,a[1000],j,sum,avg;
scanf("%d",&c);
for (i=1;i<=c;i++){
        scanf("%d",&n);
        sum=0;avg=0;
        for (j=0;j<n;j++){
            scanf("%d",&a[j]);
            sum+=a[j];
        }
        sum/=n;
        for (j=0;j<n;j++){
            if(a[j]>sum) avg++;
        }
        printf("%.3f%%\n",(float)(avg*100)/n);
}

return 0;
}
