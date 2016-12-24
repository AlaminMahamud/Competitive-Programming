#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		int j;
		for(j=0; j<=i; j++){
			cout << "*";
		}
		for(int o = j; o<n; o++){
			cout << ".";
		}
		cout <<endl;
	}
	return 0;
}