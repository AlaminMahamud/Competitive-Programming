#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> v;
	v.push_back(1);
	for(int i=2; i<n; i++){
	 	if(n%i == 0) v.push_back(i);
		if(i != n/i) v.push_back(n/i);
		v.push_back(i);; 
	}
	sort(v.begin(), v.end());
	for(vector<int> :: iterator it = v.begin(); it!=v.end(); it++){
		cout << *it << endl;
	}
	return 0;
}
