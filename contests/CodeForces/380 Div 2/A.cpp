#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    string s;
    cin >> s;
    int si = s.size();
    for(int i = 0; i<si; i++){
        if (si-1==0) cout << s[i];
        else if(s[i]=='o' && s[i+1]=='g' && s[i+2]=='o'){
            cout << "***";
            i+=2;
            while((s[i+1]=='g' && s[i+2]=='o') && i<si)
                i+=2;
        }
        else
            cout << s[i];

    }
    cout << endl;
    return 0;
}
