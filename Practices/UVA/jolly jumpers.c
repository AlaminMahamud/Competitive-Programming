#include<stdio.h>
int main(){

    int a[3001],i,b,c=0;
    while(scanf("%d",&b)!=EOF){
        for(i=0;i<b;i++){
            scanf("%d",&a[i]);
        }

        for(i=1;i<b;i++){
            a[i-1]=a[i]-a[i-1];
            if(a[i-1]<0) a[i-1]*=-1;
        }

        for(i=0;a[i]!=1;i++ ){

           if (a[i]!=(b-1)-i) {
             c=1;
             printf("Not jolly\n");
             break;
           }
        }
        if(c==0) printf("Jolly\n");

    }




return 0;
}
