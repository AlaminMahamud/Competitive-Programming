#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char c[5];
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>c;
        if(strlen(c)==3){
            if((c[0]=='o' && c[1]=='n') || (c[0]=='o' && c[2]=='e')||(c[1]=='n'&&c[2]=='e') ){
                cout<<1<<endl;
            }else{
            cout<<2<<endl;
            }
        }
        else{cout<<3<<endl;}
    }
   return 0;
}
