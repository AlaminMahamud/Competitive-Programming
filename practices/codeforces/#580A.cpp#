#include <iostream>

using namespace std;

int main(){
    int n,count = 1,max = 1;
    cin >> n;
    int a[n];
    for(int i=0; i<n;i++){
        cin >>a[i];
    }
    for(int i=1; i<n; i++){
        if(a[i-1]>a[i]){
            if(count>max) max = count;
            count = 1;
        }else 
            count++;
    }

    if(count>max) max = count;

    cout << max << endl;
    return 0;
}