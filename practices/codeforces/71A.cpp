#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        int slength = s.length();
        if(slength>10){
            //string::iterator it = s.begin();
            cout << *(s.begin()) << slength-2 << *(s.end()-1)<<endl; 
        }
        else{
            cout << s << endl;
        }
    }
    return 0;
}