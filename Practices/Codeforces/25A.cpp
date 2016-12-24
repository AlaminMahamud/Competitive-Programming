#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n,index=0,even=0;
    
    cin >> n;
    int a[n];
    bool flag[n];
    memset(flag,false,sizeof(flag));
    
    for(int i=0; i<n; i++){
        cin >>a[i];
        if(a[i]%2==0){
            flag[i] = true;
            even++;
        }
    }

if(even==1){
    for(int i=0; i<n;i++){
        if(flag[i]){ 
            index = i;  
        }  
    }
}else{
    for(int i=0; i<n;i++){
        if(!flag[i]){ 
            index = i;  
        }  
    }
}

    cout << ++index << endl;
    return 0;
}