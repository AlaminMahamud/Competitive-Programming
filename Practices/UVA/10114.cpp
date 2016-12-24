#include <bits/stdc++.h>
using namespace std;

int main(){
    //freeopen('test.txt', "r", stdin);
    while(1){
        int duration, records;
        double installments, loan;
        cin >> duration;
        if(duration<0) break;
        cin >> installments>> loan>> records;
        double rates[duration];
        memset(rates, 0.00, sizeof(rates));
        int month;
        double rate;
        while(records-->0){
            cin>>month>>rate;
            for(int i=month;i<duration;i++)
                rates[i] = rate;
        }

        double car = loan + installments;
        int i=0;
        car -= (car*rates[i++]);

        while(car<loan){
            loan -= installments;
            car -= (car*rates[i++]);
        }
        if((i)==1) cout << "1 month" <<endl;
        else 
            cout << i << " months" << endl;
    }
    return 0;
}