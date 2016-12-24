/*
ID: A1am1N
PROG: ride
LANG: C++14
*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
    int cs,gs,cr,gr,i,j;
    char comet[100], group[100];
    freopen("ride.in","r",stdin);
    freopen("ride.out","w",stdout);
    while(scanf("%s %s", comet, group)!=EOF){
      cs = strlen(comet);
      gs = strlen(group);
      cr = 1; gr = 1;
      for (i = 0; i < cs; i++)
      {
        cr *= (comet[i] - 64);
      }
      for (j = 0; j < gs; j++)
      {
        gr *= (group[j] - 64);
      }
      if(gr%47 == cr%47) printf("GO\n");
      else printf("STAY\n");
    }
   return 0;
}