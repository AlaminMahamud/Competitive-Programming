#include <stdio.h>
int main(){
     int i,t,e,f,c;
     scanf("%d",&t);
     for (i=1;i<=t;i++) {
        scanf("%d %d %d",&e,&f,&c);
        e=e+f;
        f=0;
        while(e!=0){
                if(f%c==0){
                        f=f+(e/c);
                        e=e/c;
                }else{
            f=f+(e/c);
            e=(e/c)+(e%c);}
            if(e==1) e=0;
        }

        printf("%d\n",f);
     }


    return 0;
}

