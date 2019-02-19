#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    if(n>=26){
         // tolower
    int sizes = s.size();
    for(int i=0; i<sizes; i++)
        s[i] = tolower(s[i]);
    // sort
    sort(s.begin(), s.end());
    //remove_duplicates
    string sanitized="";
    for(int i=0; i<sizes; i++){
        if(i==0)
            sanitized+=s[i];
        else{
            if(s[i]!=s[i-1])
                sanitized+=s[i];
        }
    }
    string all = "abcdefghijklmnopqrstuvwxyz";
    if(sanitized.compare(all)==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}
