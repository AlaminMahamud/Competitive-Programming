#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int q = 1;
	for(int i=1; i<=n; i++){
		if(q>n)break;
		for(int j = 1; j<=(n-q)/2; j++){
			cout << ".";
		}
		for(int j=1; j<=q; j++){
			cout << "*";
		}           
		for(int j=(n-q)/2+q+1; j<=n; j++){
			cout << ".";
		}
		q+=2;
		cout <<endl;
	}
	return 0;
}