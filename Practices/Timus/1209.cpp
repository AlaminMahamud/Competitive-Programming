#include <bits/stdc++.h>
using namespace std;
long long a[10000];
void compute(){
	int count = 2;
	a[1] = 2;
	for(int i=2; i<10000; i++){
		a[i] = a[i-1]+(count++);
	}
}
bool search(long long k){
	for(int n = 2; n<10000 && a[n] <=k ; n++){
		if(a[n] == k) return true;
	}
	return false;
}
int main(){
	int tc;
	cin >> tc;
	compute();                        	
	while(tc-->0){
		int k;
		cin >> k;
		if(k==1 || k==2) cout << "1 ";
		else if(search(k)) cout << "1 ";
		else cout << "0 ";
		
	}
	return 0;
}