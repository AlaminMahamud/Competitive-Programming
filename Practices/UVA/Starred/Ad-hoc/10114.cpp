#include <bits/stdc++.h>
using namespace std;

int main(){
  while(1){
    int duration;
    cin >> duration;
    if(duration < 0)break;
    double down, loan;
    int dep;
    cin >> down >> loan >> dep;
    double d[duration+1];
    for(int i = 0; i < dep; i++){
      int mm;
      cin >> mm;
      double d_d;
      cin >> d_d;
      for(int jj = mm; jj <= duration; jj++){
	d[jj] = d_d;
      }
    }

    double car = loan+down;
    double depre = car * d[0];
    car -= depre;
    int i = 1;
    while(loan>=car){
      loan -= down;
      depre = car * d[i++];
      car -= depre;
    }

    if(i-1==1) cout << "1 month" << endl;
    else cout << i-1 << " months" << endl;
  }

  return 0;
}
