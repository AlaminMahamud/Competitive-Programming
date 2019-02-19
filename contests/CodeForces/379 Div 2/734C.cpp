#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    int x,s;
    cin >> x >> s;
    int a[m],b[m],c[n],d[n];
    for(int i=0;i<m;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    for(int i=0;i<k;i++){
        cin >> c[i];
    }
    for(int i=0;i<k;i++){
        cin >> d[i];
    }

    int seconds = 0;
    int numberofpotions = n;
    bool flagk=false,flagm=false;
    int stemp = s;

    for(int i=k-1;i>=0 && !flagk;i--){
        if(s>=d[i]) {numberofpotions=n-c[i];s-=d[i];flagk=true;}
    }
    int index=-1,mini=INT_MAX;

    for(int i=0; i<m;i++){
        if(mini>a[i] && s>=b[i]) index = i;
    }

    if(index>=0) {seconds+=numberofpotions*a[index];}
    else seconds +=numberofpotions*x;
    cout << seconds << endl;
    return 0;
}
