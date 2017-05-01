#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  string s, u;
  while(t--){
    cin >> s >> u;
    if(s==u){
      // last three
      if(s=="ataque") cout << "Aniquilacao mutua" << endl;
      else if(s=="papel") cout << "Ambos venceram" << endl;
      else cout << "Sem ganhador" << endl;
      
    }else{
      bool p1;
      if(s == "ataque" && u == "pedra"){
	p1 = true;
      }
      else if(u == "ataque" && s == "pedra"){
	p1 = false;
      }
      else if(s == "pedra" && u == "papel"){
	p1 = true;
      }
      else if(s == "papel" && u == "pedra"){
	p1 = false;
      }
      else if(s == "ataque" && u == "papel"){
	p1 = true;
      }
      else if(u == "ataque" && s == "papel"){
	p1 = false;
      }
      if(p1) cout << "Jogador 1 venceu" << endl;
      else cout << "Jogador 2 venceu" << endl;
    }
  }
  return 0;
}
