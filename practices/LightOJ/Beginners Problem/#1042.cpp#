#include <cstdio>
#include <cstring>

bool check(int N, int pos){
  return (bool) (N&(1<<pos));
}

int main(){
  int test;
  scanf("%d",&test);
  
  for(int t = 1; t <= test; t++){
    int n,l=0;
    scanf("%d",&n);
    int a[32];
    memset(a,0,sizeof(a));
    bool flag = false;
    
    for(int i=0; i<=31; i++){
      if(check(n,i)){a[i]=1;l=i;if(i!=0)flag=true;}
      else a[i] = 0;
    }
    
    int final = 0;
    bool swap = true;
    if(!flag){
      final = d<<1;
    }else{
      
      for(int i=l; i>=0; i--){
        if(a[i]==0)swap=false;
      }
      
      if(swap){
        
        for(int i=31; i>=1;i--){
          a[i] = a[i-1];
        } 
        l++;
        a[0] = 0;
      }
       for(int i=0; i<=l-2; i++){
          for(int j=i+1; j<=l-1; j++){
            if(a[j]==0 && a[i]==1){
              a[j] = 1;
              a[i] = 0;
              break;
            }
          }
        }
       
       int d=1;
       for(int i=0; i<=l; i++){
        final += (d<<i) * a[i];
       }
       
      }
    
    printf("%d\n",final);
    
    }
  }

  return 0;
}
