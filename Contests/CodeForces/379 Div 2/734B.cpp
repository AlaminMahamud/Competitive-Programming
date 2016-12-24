#include <iostream>
using namespace std;


int main(){
    int a2,a3,a5,a6;
    long long sum=0;
    cin >> a2 >> a3 >> a5 >> a6;
    if(a2==0) sum = 0;

    while(a2>0 && a5>0 && a6>0){
        sum+=256;
        a2--;
        a5--;
        a6--;
    }

    while(a2>0 && a3>0){
        sum+=32;
        a2--;
        a3--;
    }

    cout << sum << endl;

    return 0;
}
