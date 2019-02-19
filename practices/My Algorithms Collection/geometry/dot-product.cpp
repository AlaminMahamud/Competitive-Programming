#include <iostream>
using namespace std;

// compute the dot product AB.BC
int dot(int a[], int b[], int c[]){
    int ab[2], bc[2];
    ab[0] = b[0]-a[0];
    ab[1] = b[1]-a[1];
    bc[0] = c[0]-b[0];
    bc[1] = c[1]-b[1];
    int dot = ab[0]*bc[0] + ab[1]*bc[1];
    return dot;
}

int main(){
    int a[2]={1,2}, b[2]={1,3}, c[2]={3,1};
    cout << dot(a, b, c) << endl;
    return 0;
}
