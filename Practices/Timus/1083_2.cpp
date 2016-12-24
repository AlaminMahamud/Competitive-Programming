#include <bits/stdc++.h>
using namespace std;
int main(){
	string n,ks;
	cin >> n >> ks;
	int num = 0;
	int size = n.size();
	for(int i=0; i<size; i++){
		num = num *10 +  ((int)(n[i]) - 48);
	}            
	int k = ks.size();
	int mod; 

	if(num%k==0){
		mod = k;
	}
	else{
		mod = num%k;
 	}

	int count = 1;
	long long result = num; 
	while(mod<=((num-count*k))){       
 		result *= ((num-count * k));
		count++;
	}             
	cout  << result << endl;	
	return 0;
}