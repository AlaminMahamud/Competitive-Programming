#include <bits/stdc++.h>
using namespace std;

int main(){
  double M[12][12], sum = 0;
  char s;
  cin >> s;
  for(int i = 0; i < 12; i++)
    for(int j = 0; j < 12; j++)
      cin >> M[i][j];

  int start = 1;
  int end = 11;

  for(int i = 11; i > 6; i--){
    for(int j = start; j < end; j++){
      sum += M[i][j];
    }
    start++;
    end--;
  }

  
  if(s == 'M')
    sum /= 30.0;

  cout << fixed << setprecision(1) << sum << endl;

  return 0;
}
