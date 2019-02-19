#include<iostream>
using namespace std;

int a[100];

void preCalc(){
    a[0] = 0;
    a[1] = 1;
    for(int i=2; i<=100;i++){
        a[i] = a[i-1] + (i*i);
    }
}

int main(){
    int n;
    preCalc();
    while(cin>>n){
        if(n==0) break;
        cout << a[n] << endl;
    }
    return 0;
}