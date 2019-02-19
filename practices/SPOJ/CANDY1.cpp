#include <iostream>
#include <climits>
using namespace std;

int main(){
    int t;
    while(cin>>t){
        if(t==-1) break;
        int a[t];
        int i = 0;
        int temp = t;
        while(t-->0){
            cin >> a[i++];
        }
        int maxi = INT_MIN;
        int sumi = 0;
        for(int j=0;j<temp; j++){
            if(a[j]>maxi) maxi = a[j];
            sumi += a[j];
        }
        if(sumi % temp !=0){
                cout << -1 << endl;
        }else{
            int equali = sumi/temp;
            int steps = 0;

            for(int j=0;j<temp;j++){

                if(a[j]>equali) {
                    steps += a[j] - equali;
                }
            }

            cout << steps << endl;
        }
    }
    return 0;
}
