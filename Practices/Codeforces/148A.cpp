#include <iostream>
using namespace std;

int main(){
    int k,l,m,n,d,count =0;
    cin >> k >> l >> m >> n >> d;
    int a[d];

    for(int i=0; i<d; i++)
        a[i] = i+1;

    for(int i=k-1; i<d; i+=k)
        a[i] = 0;
    for(int i=l-1; i<d; i+=l)
        a[i] = 0;
    for(int i=m-1; i<d; i+=m)
        a[i] = 0;
    for(int i=n-1; i<d; i+=n)
        a[i] = 0;

    for(int i=0; i<d; i++)
        if(a[i] == 0)
            count++;
    
    cout << count << endl;     
}