#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int low, int high){
    int i = low - 1;
    int pivot = a[high];
    for(int j = low; j<high; j++){
        if(a[j] <= pivot)
            swap(&a[++i], &a[j]);
    }
    swap(&a[++i],&a[high]);
    return i;
}

void quickSort(int a[], int low, int high){
    if(low<high){
        int p = partition(a, low, high);
        quickSort(a, low, p-1);
        quickSort(a, p+1, high);
    }
}

void printArray(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    quickSort(a, 0, n-1);
    printArray(a, n);
    return 0;
}
