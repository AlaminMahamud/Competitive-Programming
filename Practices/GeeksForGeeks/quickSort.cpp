#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition2(int a[], int low, int high){
    int i = low-1;
    int pivot = a[high];
    cout << pivot << endl;
    for(int j = low; j <= high-1; j++){
        if(a[j]<=pivot){
            swap(&a[++i],&a[j]);
        }
    }
    swap(&a[++i], &a[high]);
    return i;
}

void printArray(int arr[], int size2){
    for(int i=0; i<size2; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void quickSort(int arr[], int low, int high){
    if(low<high){
        int pivot = partition2(arr, low, high);
        quickSort(arr, low, pivot-1);
        quickSort(arr, pivot+1, high);
    }
}


int main(){
    int arr[] = {8,7,6,5,4,3,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printArray(arr,n);
}
