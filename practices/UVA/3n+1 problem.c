#include <stdio.h>
int main(){
    int x,y,i,j,count=0,max=0;
 while(scanf("%d %d",&i,&j) !=EOF){
    max=0;
    if(i>j){
                for (x=i;x<=j;x++){
                        y=x;
                        count=0;
                        if(y==1){
                                count++;
                                if(max<count) max=count;
                        }else{
                            while(y>1){
                                count++;
                                if(y%2==1) y=3*y+1;
                                else y=y/2;
                                if(y==1){
                                count++;
                                if(max<count) max=count;
                                break;
                                }
                            }
                        }
                        if(max<count) max=count;
                }
        }
         else{
                    for (x=j;x<=i;x++){
                            y=x;
                        count=0;
                        if(y==1){
                                count++;
                                if(max<count) max=count;
                        }else{
                            while(y>1){
                                count++;
                                if(y%2==1) y=3*y+1;
                                else y=y/2;
                                if(y==1){
                                count++;
                                if(max<count) max=count;
                                break;
                                }
                            }
                        }
                    if(max<count) max=count;
                 }
         }


    printf("%d %d %d\n",i,j,max);
}
    return 0;
}
