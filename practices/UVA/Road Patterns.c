#include<stdio.h>
int main(){
int i,j=0,r,n;

while(scanf("%d %d",&r,&n)!=EOF){
        j++;i=0;
        if(r==0 && n==0)break;
        if(r-(n*27)>0)  printf("Case %d: impossible\n",j);
        else{
            r=r-n;
            while(r>0){
                i++;
                r-=n;
            }
            printf("Case %d: %d\n",j,i);
        }


}


return 0;
}
