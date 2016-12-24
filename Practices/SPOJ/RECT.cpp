#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int s = sqrt(n);
    int t=0;
    for(int i=1; i<=s; i++){
        t+=((n/i)-(i-1));
    }
    cout << t << endl;
    return 0;
}