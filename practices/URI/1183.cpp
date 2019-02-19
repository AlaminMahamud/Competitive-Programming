#include <bits/stdc++.h>
using namespace std;

int main(){
  double M[12][12];
  char s;
  cin >> s;

  for(int i = 0; i<12; i++){
    for(int j = 0; j<12; j++){
      cin >> M[i][j];
    }
  }
  double sum = 0; 
  for(int i = 0; i < 12; i++){
    for(int j = 0; j< 12;j++){
      if(j>i){
        sum += M[i][j];
      }
    }
  }
  if(s == 'M')
     sum /= 66.0;

    cout << fixed << setprecision(1) <<  sum << endl;
  return 0;
}
