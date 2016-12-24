#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int num = 0;
	int size = s.size();
	int k;
	for(int i=0; i<size; i++){
		if(s[i]!= '!'){
			num = num *10 +  ((int)(s[i]) - 48);
		}
		if(s[i]=='!'){
			k = size - i;
			break;	
		}
	}
	int mod;
	if(k!=0){
		if(num%k==0){
			mod = k;
		}
		else{
			mod = num%k;
		}
	}

	int count = 1;
	long long result = num;

	while(mod!=(num-count*k)){
		result *= (num-count * k);
		count++;
	}
	result *= mod;
	cout  << result << endl;	
	return 0;
}