#include <bits/stdc++.h>
using namespace std;
int main(){
	int tc;
	cin >> tc;
	while(tc-->0){
		int n;
		cin >>n;
		if(n<=10) cout << n <<" " << 0 <<endl;
		else cout << 10 << " " << n-10 << endl;                                
	}
	return 0;
}