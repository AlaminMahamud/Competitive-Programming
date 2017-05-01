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
  int start = 1;
  int end = 11;
  for(int i = 0; i < 5; i++){
    for(int j = start; j < end; j++){
      sum += M[i][j];
    }
    start += 1;
    end -= 1;
  }
  
  if(s=='M')
    sum /= 30.0;

  cout << fixed << setprecision(1) << sum << endl;
  return 0;
}
