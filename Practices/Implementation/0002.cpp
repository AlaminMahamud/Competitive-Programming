#include <bits/stdc++.h>
using namespace std;
int main(){
  int a[] = {
               1000,
 	        500,
	        100,
	         50,
	         20,
	         10,
 	          5,
	          2,
	          1
            };

  int amount = 0;
  cin >> amount;
  for(int i = 0; i < 9; i++){
    cout << a[i] << "=>" << amount/a[i] << endl;
    amount -= (a[i] * (amount/a[i]));
  }
  
  return 0;
}
