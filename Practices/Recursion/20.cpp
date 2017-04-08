#include <bits/stdc++.h>
using namespace std;

void tofh(int n, char source, char temp, char dest){
  if(n > 0){
    tofh(n-1, source, dest, temp);
    printf("%c->%c\n", source, dest);
    tofh(n-1, temp, source, dest);
  }
}

int main(){

  char source = 'S';
  char temp   = 'T';
  char dest   = 'D';

  int n;
  scanf("%d", &n);
  tofh(n, source, temp, dest);
  return 0;

}
