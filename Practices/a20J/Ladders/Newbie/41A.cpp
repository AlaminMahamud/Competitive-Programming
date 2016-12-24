/**********************************************************************************************************
We don't talk anymore
We don't talk anymore
We don't talk anymore
Like we used to do
We don't love anymore
What was all of it for?
Oh, we don't talk anymore, like we used to do...

I just heard you found the one, you've been looking
You've been looking for
I wish I would have known that wasn't me
Cause even after all this time
I still wonder
Why I can't move on
Just the way you did so easily

Don't wanna know
Kind of dress you're wearing tonight
If he's holdin' onto you so tight
The way I did before
I overdosed
Should've known your love was a game
Now I can't get you out of my brain
Oh, it's such a shame

That we don't talk anymore
We don't talk anymore
We don't talk anymore
Like we used to do
We don't love anymore
What was all of it for?
Oh, we don't talk anymore
Like we used to do

I just hope you're lying next to somebody
Who knows how to love you like me
There must be a good reason that you're gone
Every now and then I think you might want me to
Come show up at your door
But I'm just too afraid that I'll be wrong

Don't wanna know
If you're looking into her eyes
If she's holdin' onto you so tight the way I did before
I overdosed
Should've known your love was a game
Now I can't get you out of my brain
Oh, it's such a shame

That we don't talk anymore
(we don't we don't)
We don't talk anymore
(we don't we don't)
We don't talk anymore
Like we used to do
We don't love anymore
(we don't we don't)
What was all of it for?
(we don't we don't)
Oh, we don't talk anymore
Like we used to do
Like we used to do

Don't wanna know
Kind of dress you're wearing tonight
If he's giving it to you just right
The way I did before
I overdosed
Should've known your love was a game
Now I can't get you out of my brain
Oh, it's such a shame

That we don't talk anymore
(we don't we don't)
We don't talk anymore
(we don't we don't)
We don't talk anymore
Like we used to do
We don't love anymore
(we don't we don't)
What was all of it for?
(we don't we don't)
Oh, we don't talk anymore
Like we used to do

(we don't talk anymore)
Don't wanna know
Kind of dress you're wearing tonight (oh)
If he's holding onto you so tight (oh)
The way I did before
(we don't talk anymore)
I overdosed
Should've known your love was a game (oh)
Now I can't get you out of my brain (whoa)
Oh, it's such a shame

That we don't talk anymore
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

  string s,t;
  cin >> s >> t;
  reverse(s.begin(),s.end());
  if(s==t) cout << "YES" << endl;
  else cout << "NO" << endl;


  return 0;
}
/********  Main() Ends Here *************/
