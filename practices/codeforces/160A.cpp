#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n,temp,sum=0,half=0,count=0;
    cin >> n;
    vector<int> a;
    
    for(int i=0; i<n; i++){
        cin >> temp;
        a.push_back(temp);
    }

    sort(a.begin(), a.end(),greater<int>());

    for(vector<int>::iterator it = a.begin(); it!=a.end(); it++){
        sum+=*it;
    }

    half = sum/2 + 1;
    sum = 0;
    
    for(vector<int>::iterator it = a.begin(); it!=a.end(); it++){
        count++;
        sum += *it;
        if(sum >= half)
            break;
    }
    
    cout << count << endl;

    return 0;
}