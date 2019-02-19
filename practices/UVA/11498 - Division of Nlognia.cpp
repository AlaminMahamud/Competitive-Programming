
#include <iostream>
using namespace std;

int main(){
int i,t,h,k,x,y;
while(cin>>t){
    if (t==0) break;
    cin>>  h >> k;
    for( i=1; i<=t; i++){
        cin >> x >> y;
        if(x==h || y==k) cout<<"divisa"<<endl;
        else if(x>h){
            if (y>k) cout<< "NE"<<endl;
            else cout<< "SE"<<endl;
        }
        else{
            if (y>k) cout<< "NO"<<endl;
            else cout<< "SO"<<endl;
        }
    }
}
return 0;
}
