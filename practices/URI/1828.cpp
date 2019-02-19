#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  string a,b;
  int i = 0;
  while(n--){
    cin >> a >> b;
    cout << "Caso #" << ++i << ": ";
    bool flag = true;
    if(a==b) {cout << "De novo!" << endl;
      continue;
    }
    else{
      if(b == "tesoura" && a == "papel") flag = false;
      else if(b == "papel" && a == "pedra") flag = false;
      else if(b == "pedra" && a == "lagarto") flag = false;
      else if(b == "lagarto" && a == "Spock") flag = false;
      else if(b == "Spock" && a == "tesoura") flag = false;
      else if(b == "tesoura" && a == "lagarto") flag = false;
      else if(b == "lagarto" && a == "papel") flag = false;
      else if(b == "papel" && a == "Spock") flag = false;
      else if(b == "Spock" && a == "pedra") flag = false;
      else if(b == "pedra" && a == "tesoura") flag = false;	
    }
    if(flag)
      cout << "Bazinga!" << endl;
    else cout << "Raj trapaceou!" << endl;
  }
  return 0;
}
