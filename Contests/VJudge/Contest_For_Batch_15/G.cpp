/*
** Author      : Does It Matter?
** Handle      : A1am1N
** Institution : CUET
** Sigil				: I Ask Why Rather That What and How
**  						: I Just Hate Unfinished Business
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

/********** Main()  function **********/
int main(){

  //freopen("read.in","r",stdin);
  //freopen("read.out","w",stdout);
  int h1,m1,h2,m2;
  while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)!=EOF){
    if(h1==0 && m1==0 && h2==0 && m2==0)break;
    int mins=0,hours;
    if(m1>m2){
      mins = (m2+60)-m1;
      h1++;
    }else mins = m2-m1;
    if(h1>h2){
      hours = h2+24-h1;
    }else hours = h2-h1;
    mins += (hours*60);
    PRD(mins);
    PRN();
  }

  return 0;
}
/********  Main() Ends Here *************/
