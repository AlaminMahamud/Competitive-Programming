#include<bits/stdc++.h>
using namespace std;

bool is_perfect(int d){
  if(d==1) return false;
  int sum = 1;
  int i = 2;
  while(i<d){
    if(d%i == 0) sum += i;
    i++;
  }
  if(d==sum) return true;
  else return false;
}

int main(){
  int n;
  cin >> n;
  while(n--){
    int d;
    cin >> d;
    if(is_perfect(d))
      cout << d << " eh perfeito" << endl;
    else
      cout << d << " nao eh perfeito" << endl;
  }
  return 0;
}
