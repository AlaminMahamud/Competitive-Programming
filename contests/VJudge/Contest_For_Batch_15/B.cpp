/*
** Author      : Does It Matter?
** Handle      : A1am1N
** Institution : CUET
** Sigil			 : I Ask Why Rather That What and How
**  					 : I Just Hate Unfinished Business
**/

#include <bits/stdc++.h>
using namespace std;
                                                                                  
/********** Main()  function **********/
int main(){

  long long a, b;
  while(scanf("%lld %lld",&a, &b)!=EOF){
    long long d;
    if(a>=b) d = a-b;
    if(a<b) d = b-a;
    printf("%lld\n",d);
  }

  return 0;
}
/********  Main() Ends Here *************/
