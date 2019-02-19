#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> v;
void compute(){
	v.push_back(2);
	for(int i=3; i<=1500000; i+=2){
		if(i%2 == 0) continue;
		else{
			bool flag = true;
			int s = sqrt(i);
			for(int j=3; j<=s && flag ; j+=2){
				if(i%j==0) flag=false;
			}
			if(flag)
				v.push_back(i);
		}	
	}	
}
int main(){                    
	compute();
	int tc;
	cin >> tc;
	while(tc-->0){
		int t;
		cin >> t;
		cout<<v[t-1]<<endl;
	}	
	return 0;
}