#include <bits/stdc++.h>
using namespace std;
int main(){
  int x;
  cout << "MUITO OBRIGADO" << endl;
  int a[3] = {0,0,0};
  while(cin >> x){
    if(x==4) break;
    if(x==1)a[0]++;
    else if(x==2) a[1]++;
    else if(x==3) a[2]++;
  }
  cout << "Alcool: " << a[0] << endl;
  cout << "Gasolina: " << a[1] << endl;
  cout << "Diesel: " << a[2] << endl;
  
  return 0;
}
