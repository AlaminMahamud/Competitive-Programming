#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(){
    char ch[1000];
    cin >> ch;
    for(int i=0; ch[i]!='\0'; i++)
       ch[i] = tolower(ch[i]);
    for (int i=0; ch[i]!='\0'; i++){
        if( ch[i] == 'a' ||
            ch[i] == 'e' ||
            ch[i] == 'i' ||
            ch[i] == 'o' ||
            ch[i] == 'u' ||
            ch[i] == 'y'          
          )
            continue;
        if( ch[i] != 'a' ||
            ch[i] != 'e' ||
            ch[i] != 'i' ||
            ch[i] != 'o' ||
            ch[i] != 'u' ||
            ch[i] != 'y'          
          )
          cout << "." << ch[i];
    }
    cout << endl;
    return 0;
}