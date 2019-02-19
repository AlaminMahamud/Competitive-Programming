#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int posicao = 0;
  int min = 100000000;
  int d;
  for(int i = 0; i < N; i++){
    cin >> d;
    if(d<min) {
     min = d;
     posicao = i;
    }
  }
  cout << "Menor valor: " << min << endl;
  cout << "Posicao: " << posicao << endl;
  return 0;
}
