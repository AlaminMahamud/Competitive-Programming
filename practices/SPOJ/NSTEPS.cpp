#include<iostream>
using namespace std;

int r[10000];
int u[10000];

void preCal(){
    int n=0; int c = 0;
    for(int i=0; i<10000;i+=2,n++){
        r[i] = 4*n;
        r[i+1] = 4*n + 1;
    }
    
    for(int i=0,n=0,c=2; i<10000;i+=2,n++){
        u[i] = 4*n+2;
        u[i+1] = 4*n+3;
    }
}

int main(){
    int t;
    preCal();
    cin>>t;
    while(t-->0){
        int x,y;
        cin >> x >> y;
        if(x==y) cout << r[x] << endl;
        else if(x==y+2) cout << u[y] << endl;
        else cout << "No Number" << endl;
    }
    return 0;
}