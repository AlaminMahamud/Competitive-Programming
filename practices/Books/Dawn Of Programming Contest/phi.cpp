/*
** Author      : Md. Alamin Mahamud
** Handle      : A1am1N
** Institution : CUET
** Sigil	   : I Ask Why Rather That What and How
**  		   : I Just Hate Unfinished Business
**/

#include <bits/stdc++.h>
using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)

#define PRD(t) printf("%d",t)
#define PRLD(t) printf("%ld",t)
#define PRLLD(t) printf("%lld",t)
#define PRC(t) printf("%c",t)
#define PRS(t) printf("%s",t)
#define PRF(t) printf("%f",t)
#define PRLF(t) printf("%lf",t)
#define PN() printf("\n")

#define MEM(a, b) memset(a, (b), sizeof(a))

#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)

#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()

#define IN(A, B, C) assert( B <= A && A <= C)

#define MP make_pair
#define PB push_back

#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()

const double pi=acos(-1.0);

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
/*******  End All Required define Pre-Processors and typedef Constants *******/

VI v;

void primeFactorize(int n){
    // all the 2s
    while(n%2==0){
      v.push_back(2);
      n /= 2;
    }

    // all the odd primes
    int sq = sqrt(n);
    FOR(i,3,sq,2){
      if(n%i==0){
        v.push_back(i);
        n /= i;
      }
    }

    if(n>2){
      v.push_back(n);
    }
}

int calculate(int base, int power){
  if (power==0)
    return 1;
  else {
    int x = calculate(base,power/2);
    if(power%2==0)
      return x * x;
    else
      return x * (base);
  }
}

void phi(VI v){
  int e[1000];
  MEM(e,-1);
  for(VI::iterator it = v.begin(); it !=v.end(); it++)
  {
    e[*it] = 1;
    for (VI::iterator it2 = it+1; it2 !=v.end(); it2++)
    {
      if(*it == *it2){
        e[*it]++;
        it++;
      }
      else
        break;
    }
  }
  int sum = 1;
  
  for (VI::iterator it = v.begin(); it != v.end(); it++){
    if(*it == *(it+1))
      continue;
    else{
      int base = *it;
      int power = e[*it];
      int temp = calculate(base,power-1);
      temp *= (base - 1);
      sum *= temp;
    }
      
  }
  cout << sum << endl;
}

/********** Main()  function **********/
int main(){

  //freopen("read.in","r",stdin);
  //freopen("read.out","w",stdout);

  int tc;
  SCD(tc);
  primeFactorize(tc);
  phi(v);

  return 0;
}
/********  Main() Ends Here *************/