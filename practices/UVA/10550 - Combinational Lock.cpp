#include <iostream>
using namespace std;
int main(){
int a,b,c,d,e,f,g;
while(cin>>a>>b>>c>>d){
    if (a==0 && b==0 && c==0 && d==0) break;
    e= (a-b)<0 ? 40+(a-b): a-b;
    f= (c-b)<0 ? 40+(c-b): c-b;
    g= (c-d)<0 ? 40+(c-d): c-d;
    cout<<1080+(e*9)+(f*9)+(g*9)<<endl;
}
return 0;
}
