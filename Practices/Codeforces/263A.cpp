#include <iostream>
using namespace std;

int main(){
    int a[5][5],row,col;
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> a[i][j];
            if(a[i][j]==1){
                row = i-2;
                col = j-2;
                break;
            }
        }
    }

    if(row<0) row *=-1;
    if(col<0) col *=-1;
        
    cout << row+col << endl;     
}