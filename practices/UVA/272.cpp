#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int c = 1;
    while(cin){
        getline(cin,s);
        int si = s.size();
        for(int i=0; i<si; i++){
            if(s[i]== '"' && c==1){
                cout << "``";
                c++;
            }else if(s[i]=='"' && c==2){
                cout << "''";
                c--;
            }else{
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}
