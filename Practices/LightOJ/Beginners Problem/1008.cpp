#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    for(int q = 1; q<=tc; q++){
        long long n;
        cin >>n;
        long long sn = sqrt(n);
        long long sn1;
        if(sn*sn==n){
            sn1=sn;
            sn--;  
        }
        else
            sn1= sn+1;
        long long diff = (sn1 * sn1) - (sn*sn);
        long long cd = n - sn*sn;
 
        long long diff2 = diff/2 + 1;
        if(diff2>=cd){                                            
            if(sn1%2!=0){
                cout << "Case "<< q << ": " << sn1 << " " << (cd);
            }else
                cout << "Case "<< q << ": " << (cd) << " " << sn1;
        }
        else{
            if(sn1%2==0){
                cout << "Case "<< q << ": " << sn1 << " " << (sn1*sn1-n+1);
            }else
                cout << "Case "<< q << ": " << ((sn1*sn1-n)+1) << " " << sn1;
        }
        cout << endl;
    }
    return 0;
}