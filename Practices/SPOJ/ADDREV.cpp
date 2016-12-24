#include <iostream>
#include <stack>
using namespace std;

int rev(int d){
    stack<int> s;
    while(d){
        s.push(d%10);
        d/=10;
    }
    int n = 1;
    int rev = 0;
    while(!s.empty()){
        int d = s.top();
        s.pop();
        rev+=d*n;
        n*=10;
    }
    return rev;
}

int main()
{
    int n;
    cin >> n;

    while(n-->0){
        int first, second;
        cin >>first >> second;
        first = rev(first);
        second = rev(second);
        cout << rev(first+second) << endl;
    }

    return 0;
}

