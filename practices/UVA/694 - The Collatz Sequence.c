#include<stdio.h>
int main(){
    long long int a,limit,t;
    int count,i=1;
    while(scanf("%lld %lld",&a,&limit)!=EOF){
        count=1;t=a;
        if (a<0 && limit<0) break;
        else if(a==1) printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n",i,t,limit,count);

        else{
            while(a!=1){

                if(a%2==0) {a=a/2;count++;}
                else {
                        if(a*3+1<=limit) {
                          a=a*3+1;
                          count++;
                        }
                        else {
                          printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n",i,t,limit,count);
                            break;
                          }
                    }
                    if(a==1) printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n",i,t,limit,count);
                }
            }
    i++;
    }


return 0;
}
