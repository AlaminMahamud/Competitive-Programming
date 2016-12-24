#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    bool b[n];

    memset(b,true,sizeof(b));

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int maximum = 0;
    int maximumIndex = 0;
    int points = 0;

    for(int j=0; j<n; j++){
        for(int i=0; i<n; i++){
            if(b[i] && a[i]>maximum){
                cout << b[i] <<"-"<< maximum << endl;
                maximum = a[i];
                maximumIndex = i;
            }
        }
        b[maximumIndex] = false;
        if(maximumIndex>0) b[maximumIndex - 1] = false;
        if(maximumIndex<n-1) b[maximumIndex + 1] = false;
        cout <<maximum << endl;
        points += maximum;
    }

    cout << points << endl;

    return 0;
}
