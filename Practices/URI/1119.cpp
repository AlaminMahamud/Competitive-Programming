#include <bits/stdc++.h>
using namespace std;

int main(){
  int x,y;
  int value;
  int total = 0;
  int Inter = 0;
  int Gremio = 0;
  int Empates = 0;
  do {
    cin >> x >> y;
    total++;
    if(x > y) Inter++;
    else if(x==y) Empates++;
    else Gremio++;
    cout << "Novo grenal (1-sim 2-nao)" << endl;
  }while(cin >> value && value == 1);

  cout << total << " grenais" << endl;
  cout << "Inter:"<<Inter<<endl;
  cout << "Gremio:"<<Gremio<<endl;
  cout << "Empates:"<<Empates<<endl;
  if(Inter>Gremio) cout << "Inter venceu mais" <<endl;
  else if(Gremio > Inter) cout <<"Gremio venceu mais" << endl;
  else cout << "Nao houve vencedor" << endl;
  return 0;
}
