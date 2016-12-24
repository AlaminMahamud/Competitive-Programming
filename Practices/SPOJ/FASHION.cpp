#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-->0){
        int n;
        cin>>n;
        vector<int> a,b;
        int temp;
        for(int i=0; i<n; i++){
            cin >> temp;
            a.push_back(temp);
        }
        for(int j=0; j<n; j++){
            cin >> temp;
            b.push_back(temp);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=a[i]*b[i];
        }
        cout << sum << endl;
    }
    return 0;
}