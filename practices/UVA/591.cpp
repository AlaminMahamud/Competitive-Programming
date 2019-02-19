#include <bits/stdc++.h>
using namespace std;

int main(){
  int set = 1;
  int n;
  while(cin >> n && n!=0){
    int a[n];
    int d = 0;
    for(int i = 0; i < n; i++){
      cin >> a[i];
      d += a[i];
    }
    int no = d/n;
    int moves = 0;
    for(int i = 0; i < n; i++)
      if(a[i]>no) moves += a[i] - no;
    cout << "Set #"<<set++<<"\n";
    cout << "The minimum number of moves is "<< moves << ".\n";
    cout <<endl;
  }
  return 0;
}
