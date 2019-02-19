#include <iostream>
using namespace std;

void result(int n){
    int i = 5;
    int count_it =  0;
    while(n/i >=1){
        count_it += n/i;
        i*=5;
    }
    cout << count_it << endl;
}

int main(){
    int t;
    cin >> t;
    int n;
    while(t-->0){
        cin >> n;
        result(n);
    }
    return 0;
}
