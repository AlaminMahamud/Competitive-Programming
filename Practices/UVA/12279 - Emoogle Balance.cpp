#include <iostream>
using namespace std;
int main(){
    int i=1,j,t,e,n;
    while(cin>>n){
        e=0;
        if (n==0) break;
        int a[n];
        for (j=0;j<n;j++){
            cin >> a[j];
            if(a[j]==0) e--;
            else e++;
        }
        cout<<"Case "<<i<<": "<<e<<endl;
        i++;
    }

return 0;
}
