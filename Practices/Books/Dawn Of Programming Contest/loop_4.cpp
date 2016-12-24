#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		for(int p = 1; p<(i+1); p++){
			cout << ".";
		} 
		int j;
		for(j=n-i; j>0; j--){
			cout << "*";	
		}
		cout <<endl;
	}
	return 0;
}