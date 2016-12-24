#include <iostream>
#include <string>
using namespace std;

void printl(string s, int start, int end,int it){
    for(int i=start; i<end;i+=it){
        for(int j=i; j<i+it;j++){
            cout << s[j];
        }
        cout << endl;
    }
}

int main(){
    int n,p,q;
    cin >> n >> p >> q;
    string s;
    cin >> s;
    bool flag=false;
    if(n%p==0){
        cout << n/p <<endl;
        printl(s,0,n,p);
        cout << endl;
    }else if(n%q==0){
        cout << n/q <<endl;
        printl(s,0,n,q);
        cout << endl;
    }else{
        for(int i = n/p;i>=1;i--){
            for(int j = n/q;j>=1;j--){
                
                if(p*i+q*j==n){
                    //print
                    cout << i+j <<endl;
                    printl(s,0,p*i,p);
                    printl(s,p*i,n,q);
                    cout << endl;
                    return 0;
                }
            }
        }
        cout << -1 << endl; 
    }
    return 0;

}