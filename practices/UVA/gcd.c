#include<stdio.h>

int fgcd(int i, int j){
int mod;
if(j%i==0) return i;
else {
    mod=j%i;
    if(mod==1) return mod;
    while(mod!=1){
        if(i%mod==0) return mod;
        else{
          j=i;
          i=mod;
          mod=j%mod;
          if(mod==1) return mod;
        }
    }
}
}


int main(){
int i,j,n,g;
while(scanf("%d",&n)!=EOF){
if(n==0)break;
g=0;
for(i=1;i<n;i++){
    for(j=i+1;j<=n;j++){
        g+=fgcd(i,j);
    }
}
printf("%d\n",g);
}

return 0;
}

