#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	if(n==1) cout << 0 <<endl;
	else{
		char a[n];
	
		for(int i=0; i<n; i++){
			cin >> a[i];
		}        
		char f = a[0];
		int ir = 0;
		int ib = 0;
		for(int i=2; i<n; i+=2){
			if(a[i] != f)
				ir++;
		}
		char s;
		if(a[0] == 'r')
			s = 'b';
		else 
			s = 'r';
		for(int i=1; i<n; i+=2){
			if(a[i] != s)
				ib++;			
		}
		if(ir == ib) cout << ir <<endl;
		else if (ir==0 || ib == 0){
			if (ir==0)
				cout << ib << endl;
			else if(ib == 0) 
				cout << ir << endl;
		}
		else{
			if(ir>ib) cout << ir << endl;
			else cout << ib << endl;
		}  
	}
	return 0;
}