#include <bits/stdc++.h>
using namespace std;

int main(){
  int R;
  cin >> R;
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
      sum+=M[R][i];
    }
  if(s == 'M')
     sum /= 12.0;

    cout << fixed << setprecision(1) <<  sum << endl;
  return 0;
}
