#include<stdio.h>
int main(){
int j=0,r,n;

while(scanf("%d %d",&r,&n)!=EOF){
        j++;

        if(r==0 && n==0)break;
        if(r-(n*27)>0)  printf("Case %d: impossible\n",j);
        else{
            r-=n;
            if(r>0){
            if(r%n!=0) printf("Case %d: %d\n",j,(r/n)+1);
            else printf("Case %d: %d\n",j,r/n);}
            else printf("Case %d: %d\n",j,0);
        }


}

return 0;
}
