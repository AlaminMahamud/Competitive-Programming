#include <iostream>

using namespace std;

int main(){
    int n,i=0,j=n-1;
    cin >> n;
    int a[n];
    int d;

    for(int i=0; i<=n-1; i++){
        cin >> d;
        a[i] = d;
    }

    for(int i=0,j=n-1; i<j; i+=2,j-=2){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    for(int i=0; i<n-1; i++) {
        cout << a[i] << " ";
    }

    cout << a[n-1] << "\n";

    return 0;
}
