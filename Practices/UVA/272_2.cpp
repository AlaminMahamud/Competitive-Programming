#include <iostream>
using namespace std;
int main(){
    char c;
    int i=1;
    while(cin>>c){
        if(i==1 && c=='"'){cout << "``";c++;}
        else if(i==2 && c=='"'){cout << "''";c--;}
        else if(c=='\n') cout << '\n';
        else cout << c;
    }
    return 0;
}
