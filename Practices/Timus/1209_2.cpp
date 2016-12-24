#include <bits/stdc++.h>
#define f(i,n)	for(i;i<n;i++) 

using namespace std;

int main(){
	int tc;
	cin >> tc;
	while(tc-->0){
		long long k;
		cin >> k;                 
		double i = sqrt(8*k-7);
		if((long long)i==i) cout << "1 ";
		else cout << "0 ";
				
	}
	return 0;
}