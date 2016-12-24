#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool is_almost_lucky(int n){
    if(n%4  == 0 || 
    n%7     == 0 ||
    n%44    == 0 ||
    n%77    == 0 ||
    n%47    == 0 ||
    n%74    == 0 ||
    n%444   == 0 ||
    n%447   == 0 ||
    n%477   == 0 ||
    n%474   == 0 ||
    n%777   == 0 ||
    n%744   == 0 ||
    n%747   == 0 ||
    n%774   == 0 
    )
        return true;
    else 
        return false;
}

bool is_lucky(int n){
    int temp = n;
    while(temp!=0){
        if(temp%10==4 || temp%10==7){
            temp = temp/10;
        }else   
            return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    if (is_lucky(n)){
        cout << "YES" <<endl;
    }else if(is_almost_lucky(n)){
        cout << "YES" <<endl;
    }else{
        cout << "NO" <<endl;
    }
    
    return 0;
}