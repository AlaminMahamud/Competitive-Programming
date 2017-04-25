#include <bits/stdc++.h>
using namespace std;

int main(){
  double M[12][12];
  char s;
  cin >> s;
  for(int i = 0; i < 12; i++)
    for(int j = 0; j < 12; j++)
      cin >> M[i][j];

  double sum = 0;
  int k = 1;
  for(int i = 11; i > 0; i--){
    for(int j = k; j < 12; j++){
      sum += M[i][j];
    }
    k++;
  }
  
  if(s=='M')
    sum /= 66.0;

  cout << fixed << setprecision(1) << sum << endl;
  return 0;
}
