#include <bits/stdc++.h>

using namespace std;

int main(){
  map<int, string> m;
  map<int, int> p;
  
  m[61] = "Brasilia";
  m[71] = "Salvador";
  m[11] = "Sao Paulo";
  m[21] = "Rio de Janeiro";
  m[32] = "Juiz de Fora";
  m[19] = "Campinas";
  m[27] = "Vitoria";
  m[31] = "Belo Horizonte";


  p[61] = 1;
  p[71] = 1;
  p[11] = 1;
  p[21] = 1;
  p[32] = 1;
  p[19] = 1;
  p[27] = 1;
  p[31] = 1;

  int d;
  cin >> d;
  if(p[d] == 1)
    cout << m[d] << endl;
  else{
    cout << "DDD nao cadastrado" << endl;
  }

}
