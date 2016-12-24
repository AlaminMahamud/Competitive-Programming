#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int count =0;
   	for(int i=1; i<=n; i++){  
    	if(i!=1) cout << " ";
    	for(int j=1;j<=i;j++){
    		if(i!=1 && j==1) cout << "(";
    		if(j!=1) cout << " ";
    		for(int k=1;k<=j;k++){ 
    			if(k!=1)
    				cout<< " ";
    			cout << ++count;
    			if(k!=j)
    				cout << " *";
    	 	}
    	 	if(j!=i)
    	 	cout << " +";
    	 	if(j==i && i!=1)
    	 	cout <<")";            
    	}   
    	if(i!=n)
    	 	cout << " +";            
   	}
	return 0;
}