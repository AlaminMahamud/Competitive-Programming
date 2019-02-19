#include<bits/stdc++.h>
using namespace std;

#define lim 10000

vector<int> v;
vector<int> d;

void calculate(){
	v.push_back(2);
	for(int j=3; j<lim; j+=2){
		if(j%2==0) continue;
		int li = sqrt(lim);
		for(int h=3; h < li; h++){
			if(j%h==0) break;
		}
		v.push_back(j);
	}	
}
            
int main(){
	calculate();
	int n,temp;
	cin >> n; 
	while(n>1){          
		for( vector<int> :: iterator it = v.begin(); it!=v.end(); it++){
			if(n%(*it)==0){ d.push_back(*it); n=n/(*it); break;}
		}
	}   
	
	for(vector<int> :: iterator it = d.begin(); it!=d.end(); it++){
		cout << *it << " ";
	}

	cout << endl;
	return 0;
}