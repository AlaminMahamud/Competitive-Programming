#include <bits/stdc++.h>
using namespace std;
int main(){
	int tc;
	//freopen("read.in","r",stdin);
	//freopen("read.out","w",stdout);
	scanf("%d", &tc);
	for(int i=1; i<=tc; i++){
		int m,n;
		scanf("%d %d",&m,&n);
		bool r=m%2,c=n%2;   

		if(m==1 || n==1) printf("Case %d: %d",i,m*n);                                
		else if(m==2 || n==2){
			if(m==2 && n==2) printf("Case %d: %d",i,m*n);
			else{ 
			int limit;
			if(m==2)  limit = n;
			else limit = m;
			int flag = 1, count = 0;
			for(int j=1; j<=limit; j++){
				if(flag==1 || flag == 2) count++;
				if(flag==2) flag = -1;
				else flag++;
			}
				printf("Case %d: %d",i,count*2); 
			}
		}
		else if(!r && !c) printf("Case %d: %d",i,m * (n/2));
		else if(!r && c) printf("Case %d: %d",i,m/2*n);                         
		else if(r && !c) printf("Case %d: %d",i,m*n/2);                          
		else if(r && c) {
			int count = ((m-1)/2 * n  + n/2 + 1);
			printf("Case %d: %d",i, count);
		}  
		printf("\n");
	}
	return 0;
}