#include <bits/stdc++.h>
using namespace std;
int main(){
	double x {2.7}; // OK
	int y {x};		// error: double->int might narrow
	int a {1000};
	char b {a};
	return 0;
}