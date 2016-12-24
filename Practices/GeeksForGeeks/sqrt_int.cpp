/*
** Author------: Md. Alamin Mahamud
** Handle------: A1am1N
** Institution-: CUET
** Sigil-------: I Ask 'WHY' Rather Than 'WHAT' and 'HOW'
**-------------: I Just Hate Unfinished Businesses
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
#define PRN() printf("\n")

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
#define EPS 1e-6
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

void findsq(int n){
  int temp = n;
  if(n==0 || n == 1){
    PRD((int)n);
    PRN();
  }
  else{
    int a = 1;
    int b = n/2;
    int c=a;
    while(a<=b){
      c = (a+b)/2; 
      if(c*c==temp) break;
      else if(c*c < temp) {a = c+1;}
      else b = c-1;
    }
    PRD((int)c);
    PRN();
  }
}


/********** Main()  function **********/
int main(){

  //freopen("read.in","r",stdin);
  //freopen("read.out","w",stdout);

  int tc;
  SCD(tc);

  while(tc--){
    int n;
    SCD(n);
    findsq(n);
  }

  return 0;
}
/********  Main() Ends Here *************/
