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


#define READ(filename) freopen(filename, "r", stdin);
#define WRITE(filename) freopen(filename, "w", stdout);

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

#define SQR(x) ((x)*(x));

#define MEM(a, b) memset(a, (b), sizeof(a))

#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)

#define SIZE 1e9
#define INF INT_MAX
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

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

double l0,w0;


/********** Main()  function **********/
int main(){

  //READ("read.in");
  //WRITE("read.out");

  int tc;
  SCD(tc);
  char c;

  double L,W;

  REP(i,tc){
    
    cin >> l0 >> c >> w0;
    double ratio = l0/w0;

    double lo = 0;
    double hi = 400;

    while(fabs(hi-lo)>EPS){

      L = (hi + lo) / 2.0;
      W = L / ratio;

      double exp_Arc = (200-L)/2.0;

      double half_L = SQR(L/2.0);
      double half_W = SQR(W/2.0);

      double r = sqrt(half_L + half_W);
      double angle = acos(sqrt(half_L)/r);
      
      double cal_Arc = angle * r;

      if(cal_Arc>exp_Arc) hi = L;
      else lo = L;
    }

    printf("Case %d: %.10lf %.10lf",i+1, L, W); 
    PRN();
  }

  return 0;
}
/********  Main() Ends Here *************/
