#include<stdio.h>
#include<math.h>
int main(){
int t,i,d,v,u;
double p,t1,t2,theta,a;
scanf("%d",&t);
for (i=1;i<=t;i++){
    scanf("%d %d %d",&d,&v,&u);
    if(v>=u)printf("Case %d: can't determine\n",i);
    else{
            p=acos(-v/u);
            p= sin(p);
            printf("Case %d: %.3lf\n",i,p);
    }

}
return 0;
}
