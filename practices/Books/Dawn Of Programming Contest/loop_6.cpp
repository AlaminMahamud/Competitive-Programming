#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int mark=m;
	int first;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=(mark-m)/2;j++){
			cout << ".";
		}
		first = (mark-m)/2 ;
	    for(int j=1; j<=m/2; j++){
	    	cout << j;
	    }
	    for(int j=m/2+1; j>=1; j--){
	    	cout << j;
	    }
	    for(int j=first+m+1; j<=mark; j++){
	    	cout << ".";
	    }
	    m-=2;
		cout <<endl;
	}
	return 0;
}