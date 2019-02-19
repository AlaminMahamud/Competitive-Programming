#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  int total = 0;
  int tc = 0;
  int tr = 0;
  int ts = 0;
  string s;
  int a;
  
  while(n--){
    cin >> a >> s;
    total+= a;
    if(s == "C") tc += a;
    else if(s == "R") tr += a;
    else if(s == "S") ts += a;
  }
  cout << fixed << setprecision(2);
  cout << "Total: " << total << " cobaias" << endl;
  cout << "Total de coelhos: " << tc << endl;
  cout << "Total de ratos: " << tr << endl;
  cout << "Total de sapos: " << ts << endl;
  cout << "Percentual de coelhos: " << (static_cast<double>(tc)/static_cast<double>(total)) * 100.0 << " %" << endl;
  cout << "Percentual de ratos: " << (static_cast<double>(tr)/static_cast<double>(total)) * 100.0 << " %" << endl;
  cout << "Percentual de sapos: " << (static_cast<double>(ts)/static_cast<double>(total)) * 100.0<< " %" << endl;  

  return 0;
}
