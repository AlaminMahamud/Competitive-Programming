#include <iostream>
using namespace std;
int gcd(int a, int b){
    if (b==0) return a;
    return gcd(b,a%b);
}
int lcm(int a, int b){
    return (a*b) / (gcd(a,b));
}
void reduceFraction(int a[]){
    int g = gcd(a[0],a[1]);
    a[0]/=g;
    a[1]/=g;
    cout << a[0] << "/" << a[1] << endl;
}
int main(){
    int a[] = {9,6};
    reduceFraction(a);
    return 0;
}
