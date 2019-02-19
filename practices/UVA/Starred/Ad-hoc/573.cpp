#include <bits/stdc++.h>
using namespace std;

int main(){

  int H, U, D, F;
  while(1){
    cin >> H;
    if(H==0)break;
    cin >> U >> D >> F;
    int i = 0;
    double init = 0.0;
    double DC = 0.0;
    double today = 0.0;
    double HAC = 0.0, HAS = 0.0;
    int va = 0;
    double red = (double)U * (double)((double)F/100.0);
    while(true){
      //      cout << i << "=>" << init << "=>" << DC << "=>" << HAC << "=>" << HAS << endl;
      i++;
      init = HAS;
      today = (double)U -  ((double)(i-1) * red) ;
      if(today < 0.0) today = 0.0;
      DC = today;
      HAC = DC + init;
      if(HAC > (double)H){
	va = 1;
	break;
      }
      HAS = HAC - (double)D;
      if(HAS < 0.0){
	va = -1;
	break;
      }
    }
    if(va == 1)cout << "success on day " << i << endl;
    else if(va == -1) cout << "failure on day " << i << endl;
  }

  return 0;
}
