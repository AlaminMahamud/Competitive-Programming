#include <bits/stdc++.h>
using namespace std;

int main(){
  int months;
  double down;
  double loan;
  int tests;
  while(cin >> months >> down >> loan >> tests && months > 0){
    double down_rates[months];

    int month;
    double down_rate;

    for(int i = 0; i < tests; i++){
      cin >> month >> down_rate;
      for(int j = month; j < months; j++)
        down_rates[j] = down_rate;
    }

    double car = ((loan + down) * (1 - down_rates[0]));
    double monthly_payment = (loan/months);
    int i = 1;
    while(loan >= car){
      car = (car* (1 - down_rates[i]));
      loan -= monthly_payment;
      i++;
    }
    i--;
    if(i == 1) cout << "1 month" << endl;
    else cout << i << " months" << endl;
  }

  return 0;
}
