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


/********** Main()  function **********/
int main(){

  //freopen("read.in","r",stdin);
  //freopen("read.out","w",stdout);
  int n;
  cin >> n;
  int a[n][2];
  
  for(int i=0; i<n; i++){
    cin >> a[i][0]
        >> a[i][1];
  }

  // sort
  for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n-1; j++){
      if(a[i][0]<a[j][0]){
        int temp = a[i][0];
        int temp2= a[i][1];
        a[i][0]=a[j][0];
        a[i][1]=a[j][1];
        a[j][0] = temp;
        a[j][1] = temp2;
      }else if(a[i][0]==a[j][0]){
        if(a[i][1]>a[j][1]){
          int temp = a[j][1];
          a[j][1] = a[i][1];
          a[i][1] = temp;
        }        
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << a[i][0] << "-" << a[i][1] << endl;
  }

  return 0;
}
/********  Main() Ends Here *************/
