#include<bits/stdc++.h>
using namespace std;

double fact_digit(int n){
	double sum = 0;
	if (n==1) return 0;
	else {
		sum += (log10((double)n)+fact_digit(n-1));                                       
		return sum;
	};
}

int main(){
    	int n;
    	cin >> n;
    	cout <<(int)fact_digit(n); 
    	cout << endl;
		return 0;
	}