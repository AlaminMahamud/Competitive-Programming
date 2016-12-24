#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,ways=0;
    cin >> n;
    int c = n-1,d=1;
    int e = n/2;
    while(c>e){
        if(c%2==0 && d%2==0 && c!=d)
            ways++;
        c--;
        d++;
    }
    cout << ways << endl;
}