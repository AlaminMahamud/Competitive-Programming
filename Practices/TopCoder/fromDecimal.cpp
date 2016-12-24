#include <iostream>
using namespace std;

int main(){
    string chars = "0123456789ABCDEFGHIJ";
    string result = "";
    int n = 1020;
    int b = 16;
    while(n>0){
        result = chars[n%b] + result;
        n/=b;
    }
    cout << result << endl;
    return 0;
}

