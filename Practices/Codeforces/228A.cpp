#include <iostream>
using namespace std;

void func(int a[]){
    int count=0,max=0;
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
    
}

int main(){

    int a[4];
    
    for(int i=0;i<4;i++){
        cin >> a[i];
    }
    
    func(a);
    return 0;
}