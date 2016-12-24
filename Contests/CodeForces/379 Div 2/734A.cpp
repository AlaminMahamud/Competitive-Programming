#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, a=0, d=0;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0 ; i<n; i++){
        if(s[i]=='A') a++;
        else d++;
    }
    if(a==d) cout << "Friendship";
    else if(a>d) cout << "Anton";
    else cout << "Danik";
    cout << endl;
    return 0;
}
