#include <stdio.h>
int main(){
    int sum=0,n1,n2,i,j,p=0;
    while (scanf("%d %d",&n1,&n2)!=EOF){
        sum=0;p=0;
        if(n1==0 && n2==0) break;
        while (n1!=0 || n2!=0){
             i=n1%10;
             j=n2%10+p;
             n1/=10;
             n2/=10;
             if(i+j>=10) {
                  sum++;p=1;
             }
             else p=0;
        }
        if(sum==0)printf("No carry operation.\n");
        else if(sum==1) printf("%d carry operation.\n",sum);
        else printf("%d carry operations.\n",sum);
    }
return 0;
}

