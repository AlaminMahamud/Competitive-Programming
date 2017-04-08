#include <bits/stdc++.h>

using namespace std;



int main(){
  int a;
  cin >> a;
  int n[a];
  for(int i = 0; i< a; i++)
    cin >> n[i];
  sort(n,n+a);
  
  cout << n[0];
  for(int i = 1; i < a; i++)
    cout << " " << n[i];
  cout << endl;
  return 0;
}
