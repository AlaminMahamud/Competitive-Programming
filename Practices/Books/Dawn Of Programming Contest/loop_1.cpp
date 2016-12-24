#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int count =0;
   	for(int i=1; i<=n; i++){  
    	for(int j=1;j<=i;j++){
    		if(i==1)
    		cout << ++count;
    		else if(j==1){
    			cout << " (";
    			cout << ++count<< " +";
    		}
    		else if(j==i){   
    			cout <<" " <<++count;
    			cout << ")";
    		}
    		else{
    			cout <<" "<< ++count<< " +";
    		}
    	}
    	if(i<n)
	    	cout << " +";
	   	if(i==n)
	   		cout << endl;
   	}
	return 0;
}