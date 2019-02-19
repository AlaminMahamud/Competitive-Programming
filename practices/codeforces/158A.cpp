#include <iostream>
using namespace std;

int main(){
    int n, k, result=0;
    cin >> n >> k;
    int j[n];
    for(int i = 0; i < n; i++)
    {
        cin >> j[i];
    }
    
    for(int i=0; i<n; i++){
        if((j[i] >= j[k-1]) && j[i] > 0){
            result++;
        }
    }
    cout << result << endl;

    return 0;
}