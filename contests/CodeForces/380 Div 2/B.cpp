#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
   for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==0){
                if(arr[i-1][j-1]==1) count++;
                if(arr[i-1][j]==1) count++;
                if(arr[i-1][j+1]==1) count++;
                if(arr[i][j-1]==1) count++;
                if(arr[i][j+1]==1) count++;
                if(arr[i+1][j-1]==1) count++;
                if(arr[i+1][j]==1) count++;
                if(arr[i+1][j+1]==1) count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}

