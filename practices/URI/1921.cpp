#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long int n;
  cin >> n;
  n -= 3;
  cout << (n*(n+1)/2) + n << endl;    
  return 0;
}
