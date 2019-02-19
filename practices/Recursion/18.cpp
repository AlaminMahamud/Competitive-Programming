#include <bits/stdc++.h>

using namespace std;

void cat(char *a ,char *b, char *c, int i, int j, int k, int pivot){

  if(j == k){
    c[j] = '\0';
    return;
  }


  
  c[i] = a[i];
  c[j] = b[j-pivot];


  cout << c[i] << "=>" << a[i] << endl;
  cout << c[j] << "=>" << b[j] << endl;

  
  cat(a,b,c, i+1, j+1, k, pivot);
}


int main(){
  int p,q,r;
  cin >> p >> q >> r;
  char a[p];
  char b[q];
  char c[r];

  for(int i = 0; i < p-1; i++) cin >> a[i];
  a[p-1] = '\0';

  for(int j = 0; j < q-1; j++) cin >> b[j];
  b[q-1] = '\0';
  
  int i = 0;

  cat(a,b,c,i, (p-1), (p+q) -2, p-1);

  for(int i = 0; i <= (p+q) -2; i++)
    cout << c[i];
   
  return 0;
}
 
