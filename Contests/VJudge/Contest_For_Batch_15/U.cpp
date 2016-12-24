/*
** Author      : Md. Alamin Mahamud
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

int q,w;

bool isFeasible(int b[], int index, int n, int sum){
  bool flag = false;
  for(int i=0; i<n-1; i++){
    for(int j=1; j<n; j++){
      if(abs(b[j]-b[i])==index){
        q = i; w = j;
        flag=true;
        break;
      }
    }
  }
  return flag;
}

/********** Main()  function **********/
int main(){

  freopen("read.in","r",stdin);
  freopen("read.out","w",stdout);

  int n;
  while(SCD(n)!=EOF){
    int m;
    int b[n];
    for(int i=0; i<n; i++){
      SCD(b[i]);
    }  
  
    SCD(m);
    sort(b,b+n);

    int lo = 0;
    int hi = b[n-1]-b[0];

    while((hi-lo)>=0){
      int mid = (hi+lo)/2;
      if(b[mid]<m){
        if(isFeasible(b,mid,n,m)){
          lo = mid;
        }
      }
      else
       hi = mid;
    }
    
    printf("Peter should buy books whose prices are %d and %d.",q,w);
    PRN();
    getchar();
  }
  return 0;
}
/********  Main() Ends Here *************/
