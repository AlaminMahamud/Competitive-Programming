#include <bits/stdc++.h>
using namespace std;

int main(){
  double n;
  double p;
  while(scanf("%lf %lf", &n, &p)== 2){
    printf("%.0lf\n", pow(p,1/n));
  }

}
