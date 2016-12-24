#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void bucketSort(float arr[], int n){
    vector<float> b[10];
    int i;
    for(i=0;i<n;i++){
        int index = arr[i]*10;
        b[index].push_back(arr[i]);
    }

    for(i=0;i<n;i++)
        sort(b[i].begin(), b[i].end());

    int index =0;
    for(i=0;i<n;i++){
        for(int j=0; j<b[i].size(); j++){
            arr[index++]=b[i][j];
        }
    }
}

void print(float arr[], int n){
    int i;
    for(i=0;i<n;i++)
        cout << arr[i] << "-";
    cout << endl;
}

int main(){
    float arr[] = {0.123, 0.134, 0.178, .423, .252, .872, .1343, .1001, 0.623, .99, .901};
    int n = sizeof(arr)/sizeof(arr[0]);
    bucketSort(arr, n);
    //print(arr,n);
}
