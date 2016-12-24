#include <iostream>
using namespace std;

int main(){
    long long n,m,a,lres, rres, res;
    cin >> n >> m >> a;
    
    lres = n/a; 
    rres = m/a;
    if(n%a!=0) lres++;
    if(m%a!=0) rres++;
    res = lres * rres;
    
    cout <<res<< endl;
    return 0;
}
  
