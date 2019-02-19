#include <iostream>

using namespace std;

int main(){
    int a,b,c,e,f,g,h,i,max=0;
    cin >>a>>b>>c;
    e = a+b*c;
    f = a * (b+c);
    g = a * b * c;
    h = (a+b)*c;
    i = a+b+c;
    max = e;
    if(max < f ) max = f;
    if(max < g ) max = g;
    if(max < h ) max = h;
    if(max < i ) max = i;
    cout << max << endl;
    return 0;
}