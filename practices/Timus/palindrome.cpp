#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void compute(){   
    for(int i=1; i<1000; i++){
    	int first = i;
    	int second = 0;
    	while(first!=0){
    		second = second*10 + first%10;
    		first/=10;	
    	}
    	if(i==second) v.push_back(second);
    }	
    cout << v[99] << endl;
}
int main(){
	compute();	
	return 0;
}