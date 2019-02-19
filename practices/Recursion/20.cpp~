#include <bits/stdc++.h>

using namespace std;


void inorder(int n){
  if(n==0 || n ==1) {cout << 1 ; return;}
  else if(n == 2){ cout << 2 ; return;}
  inorder(n - 2);
  cout << " " << n << " ";
  inorder(n - 1);
  return ;
 }
int main(){
  int n;
  cin >> n;
  inorder(n);
  //  preorder(n);
  //  postorder(n);
  return 0;
}
