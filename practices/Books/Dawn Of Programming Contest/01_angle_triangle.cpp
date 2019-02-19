#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	cout << acos( ((b*b) + (c*c) - (a*a)) /(2 * b * c)) * 180/3.141592654<< endl;
	cout << acos( ((a*a) + (c*c) - (b*b)) /(2 * a * c)) * 180/3.141592654 << endl;
	cout << acos( ((b*b) + (a*a) - (c*c)) /(2 * b * a)) * 180/3.141592654 << endl;
	return 0;
}
