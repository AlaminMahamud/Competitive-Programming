  /**********************************************************************************************************
  I won't lie to you
  I know he's just not right for you
  And you can tell me if I'm off
  But I see it on your face
  When you say that he's the one that you want
  And you're spending all your time
  In this wrong situation
  And anytime you want it to stop

  I know I can treat you better than he can
  And any girl like you deserves a gentleman
  Tell me why are we wasting time
  On all your wasted crying
  When you should be with me instead
  I know I can treat you better
  Better than he can

  I'll stop time for you
  The second you say you'd like me to
  I just wanna give you the loving that you're missing
  Baby, just to wake up with you
  Would be everything I need and this could be so different
  Tell me what you want to do

  'Cause I know I can treat you better than he can
  And any girl like you deserves a gentleman
  Tell me why are we wasting time
  On all your wasted crying
  When you should be with me instead
  I know I can treat you better
  Better than he can

  Better than he can

  Give me a sign
  Take my hand, we'll be fine
  Promise I won't let you down
  Just know that you don't
  Have to do this alone
  Promise I'll never let you down

  'Cause I know I can treat you better than he can
  And any girl like you deserves a gentleman
  Tell me why are we wasting time
  On all your wasted crying
  When you should be with me instead
  I know I can treat you better
  Better than he can

  Better than he can

  Better than he can

  **********************************************************************************************************/


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

  #define SQR(x) ((x)*(x))
  #define SZ(x) (return (signed int)x.size())

  #define MEM(a, b) memset(a, (b), sizeof(a))

  #define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
  #define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
  #define REP(i, j) FOR(i, 0, j, 1)
  #define RREP(i, j) RFOR(i, j, 0, 1)
  #define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)

  #define MIN INT_MIN
  #define MAX INT_MAX
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


  /********** Main()  function **********/
  int main(){

    //READ("in");
    //WRITE("out");

    int n;
    cin >> n;
    int a[12];
    REP(i,12) cin >> a[i];
    sort(a,a+12,greater<int>());
    FOR(i,1,12,1){
      a[i]+=a[i-1];
    }   
    REP(i,12){
      if(n==0) {cout << 0 << endl; break; }
      else if(n<=a[i]) {cout << i+1 << endl;break;}
      else if(i==11 && n>a[i]) cout << -1 << endl;
    }
    return 0;
  }
  /********  Main() Ends Here *************/
