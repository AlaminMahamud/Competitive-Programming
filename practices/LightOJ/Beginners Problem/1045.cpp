#include <cstdio>
#include <cmath>
#include <cstring>

double ab[1000002];

void calc(){
  memset(ab,0,sizeof(ab));
  for(int i=1;i<=1000000; i++){
    ab[i] = ab[i-1] + log10(i);
  }
}

int main(){
  calc();
  int test,cs=0;
  scanf("%d",&test);
  while(test--){
    double value = 0;
    int n,base;
    scanf("%d %d",&n, &base);    
    
    printf("Case %d: %d\n",++cs, (int)(floor(ab[n]/log10(base))) +1 );
  }
  return 0;
}
