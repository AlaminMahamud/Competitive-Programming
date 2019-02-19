#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    while(cin>>t){
        if(t==0) break;
        string s;
        cin >> s;
        int ssize = s.size();

        int row = ssize/t;

        char arr[row][t];

        int count = 0;
        int index = 0;

        for(int i=0; i<row; i++){
            if(count == 0){
                for(int j=0; j<t; j++){
                    arr[i][j]=s[index++];
                }
                count = 1;
            }else{
                for(int j=t-1;j>=0;j--){
                    arr[i][j]=s[index++];
                }
                count = 0;
            }
        }

        for(int j=0; j<t;j++){
            for(int i=0; i<row; i++){
                //cout << j << "="<<i <<endl;
                cout << arr[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}
