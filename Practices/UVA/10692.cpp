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

uint64 p(int base, int power, int mod){
  if (power==0) return 1;
  else {
    uint64 x = p(base,power/2,mod)%mod;
    if(power%2==0) return (x*x)%mod;
    else return (((base)%mod * p(base,power-1,mod)%mod)%mod);
  }
}

int make_number(string s, int start, int end){
  int num = 0;
  for(int i = start; i<=end; i++){
    num = num*10 + (s[i]-'0');
  }
  return num;
}

/********** Main()  function **********/
int main(){

  freopen("read.in","r",stdin);
  freopen("read.out","w",stdout);
  int z = 1;
  string s;
  while (getline(cin,s))
  { 
    // getchar();
    if(s[0]=='#') break;
    int size = s.size();
     s.erase(s.size()-1);
    VI v;
    int start = 0;
    size--;
    for(int i=0; i<size; i++){
      // cout << i << "->" << (int)s[i] << endl;
      if(s[i]==' '){
        v.push_back(make_number(s, start, i-1));
        start = i+1;
      }
      if(i==size-1){
        v.push_back(make_number(s, start, i));
      }
    }

    int vs = v.size();
    
    int mod = v[0];
    int n = v[1];
    uint64 val = v[vs-1];
    for(int j = vs-2; j>=2; j--){
      // cout << mod << endl;
      val = p(v[j],val,mod);
      // cout << val << endl;
    }
    // getchar();
    printf("Case #%d: %lld", z++, val);
    PRN();
  }

  return 0;
}
/********  Main() Ends Here *************/
