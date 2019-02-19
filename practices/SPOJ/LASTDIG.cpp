#include <iostream>
using namespace std;


long long power(long long a, long long b){
    if(a==0 && b==0) return 1;
    if(a==0) return 0;
    if(b==0) return 1;
    if(b==1) return a%10;
    if(b%2==0) {
        long long x = power(a,b/2);
        return (x*x)%10;
    }else
        return (a*(power(a,b-1)))%10;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int d = (power(a,b))%10;
        cout << d << endl;
    }
    return 0;
}
