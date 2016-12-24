#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double a;                         
	cin >> a;
	int b =(int)((double)sqrt(a)* 1000) % 10;
	cout << b << endl;
	if(b>=0 && b<=4) cout << (int)sqrt(a) << endl;
	else if(b>=5 && b<=9) cout << (int)sqrt(a) + 1 << endl;
	return 0;
}
