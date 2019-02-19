#include <iostream>
using namespace std;

void radixSort(int arr[], int n){
    int _max = INT_MIN;

    for(int i=0; i<_size; i++){
        if(a[i]>_max) _max = a[i];
    }

    int digits = 0;

    if(_max==0) digits = 1;
    else{
        while(_max){
        _max/=10;
        digits++;
        }
    }

    for(int ex[])
}

void print(int arr[], int n){
    for(int i=0; i<n; i++)
        cout << arr[i]<<" ";
    cout << endl;
}

int main(){
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr)/sizeof(arr[0]);
    radixSort(arr, n);
    print(arr, n);
    return 0;
}
