#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t,i,x,j;
    cin >>t;
    for (i=1; i<=t;i++){
        cin>>x;
        int a[x];
        for (j=0;j<x;j++){
            cin>>a[j];
        }
        int minimum=a[0];
        int maximum=0;
        for(j=0;j<x;j++){
        minimum=min(a[j],minimum);
        maximum=max(a[j],maximum);
        }
        cout<<(maximum-minimum)*2<<endl;
    }
return 0;
}
