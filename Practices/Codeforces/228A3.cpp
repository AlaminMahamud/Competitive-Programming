#include <iostream>
using namespace std;

int main(){

    int a[4];
    
    for(int i=0;i<4;i++){
        cin >> a[i];
    }
    
    int count=0;
    bool flag[4];
    
    for(int i=0; i<4; i++){
        for(int j=i+1; j<4;j++){
            if(a[i] == a[j] && !flag[j]){
                flag[j] = true;
                count++;        
            }
        }
    }
    cout << count << endl;

    return 0;
}