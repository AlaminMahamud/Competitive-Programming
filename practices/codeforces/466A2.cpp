#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <climits>
using namespace std;

int main(){
    int n,m,a,b;
    cin >>n>>m>>a>>b;
    int mini = INT_MAX;
    int first = n*a;
    int second = (n/m)*b + (n%m)*a;
    int third = ((n/m)+1)*b;

    (mini>first)? mini = first : mini = mini;
    (mini>second) ? mini = second : mini = mini;
    (mini>third) ? mini = third : mini = mini;

    cout << mini <<endl;
    return 0;
}
