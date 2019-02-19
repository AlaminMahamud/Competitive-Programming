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
  
  int k = 10;
  for(int i = 1; i < 6; i++){
    for(int j = 11; j > k; j--){
      sum += M[i][j];
    }
    k--;
  }
  k = 10;
  for(int i = 10; i > 5; i--){
    for(int j = 11; j > k; j--){
      sum += M[i][j];
    }
    k--;
  }  
  if(s=='M')
    sum /= 30.0;

  cout << fixed << setprecision(1) << sum << endl;
  return 0;
}
