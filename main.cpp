/**********************************************************************************************************
Yeah, it's been a ride
I guess I had to, go to that place, to get to this one
Now some of you, might still be in that place
If you're trying to get out, just follow me
I'll get you there

You can try and read my lyrics off of this paper before I lay 'em
But you won't take the sting out these words before I say 'em
Cause ain't no way I'ma let you stop me from causing mayhem
When I say I'ma do something I do it,
I don't give a damn what you think,
I'm doing this for me, so fuck the world
Feed it beans, it's gassed up, if it thinks it's stopping me
I'ma be what I set out to be, without a doubt undoubtedly
And all those who look down on me I'm tearing down your balcony
No ifs, ands or buts, don't try to ask him why or how can he
From Infinite down to the last Relapse album
He's still shitting, whether he's on salary paid hourly
Until he bows out or he shits his bowels out of him
Whichever comes first, for better or worse
He's married to the game, like a fuck you for Christmas
His gift is a curse, forget the Earth, he's got the urge
To pull his dick from the dirt, and fuck the whole universe


I'm not afraid
To take a stand 
Everybody
Come take my hand (come take my hand)
We'll walk this road together, through the storm
Whatever weather, cold or warm
Just letting you know that you're not alone
Holler if you feel like you've been down the same road (same road)


Okay quit playing with the scissors and shit, and cut the crap
I shouldn't have to rhyme these words in the rhythm for you to know it's a rap
You said you was king, you lied through your teeth, for that
Fuck your fillings, instead of getting crowned you're getting capped
And to the fans, I'll never let you down again, I'm back
I promise to never go back on that promise, in fact
Let's be honest, that last Relapse CD was ehhh
Perhaps I ran them accents into the ground
Relax, I ain't going back to that now
All I'm trying to say is get back, click-clack, blow
Cause I ain't playing around
It's a game called circle and I don't know how, I'm way too up to back down
But I think I'm still trying to figure this crap out
Thought I had it mapped out but I guess I didn't, this fucking black cloud
Still follows me around but it's time to exorcise these demons
These motherfuckers are doing jumping jacks now!


I'm not afraid
To take a stand 
Everybody
Come take my hand (come take my hand)
We'll walk this road together, through the storm
Whatever weather, cold or warm
Just letting you know that you're not alone
Holler if you feel like you've been down the same road (same road)


And I just can't keep living this way
So starting today, I'm breaking out of this cage
I'm standing up, I'ma face my demons
I'm manning up, I'ma hold my ground
I've had enough, now I'm so fed up
Time to put my life back together right now! (now)

It was my decision to get clean, I did it for me
Admittedly, I probably did it subliminally
For you, so I could come back a brand new me you helped see me through
And don't even realize what you did, 'cause believe me you
I been through the ringer, but they could do little to the middle finger
I think I got a tear in my eye, I feel like the king of
My world, haters can make like bees with no stingers
And drop dead, no more beef lingers
No more drama from now on, I promise
To focus solely on handling my responsibilities as a father
So I solemnly swear to always treat this roof, like my daughters
And raise it, you couldn't lift a single shingle on it!
Cause the way I feel, I'm strong enough to go to the club
Or the corner pub, and lift the whole liquor counter up
Cause I'm raising the bar
I'd shoot for the moon but I'm too busy gazing at stars
I feel amazing and I'm..


I'm not afraid
To take a stand 
Everybody
Come take my hand (come take my hand)
We'll walk this road together, through the storm
Whatever weather, cold or warm
Just letting you know that you're not alone
Holler if you feel like you've been down the same road (same road)
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

// Define file I/O
#define READ(filename) freopen(filename, "r", stdin);
#define WRITE(filename) freopen(filename, "w", stdout);

// Define memory set function
#define MEM(x,y) memset(x,y,sizeof(x))
#define CLEAR(x) memset(x,0,sizeof(x))

// Define Input
#define SF scanf
#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)

// Define Output
#define PF printf
#define PRD(t) printf("%d",t)
#define PRLD(t) printf("%ld",t)
#define PRLLD(t) printf("%lld",t)
#define PRC(t) printf("%c",t)
#define PRS(t) printf("%s",t)
#define PRF(t) printf("%f",t)
#define PRLF(t) printf("%lf",t)
#define PRN() printf("\n")

// Define Fucntions And Objects
#define pb push_back
#define SORT(v) sort(v.begin(),v.end())
#define RSORT(v) sort(v.rbegin(),v.rend())
#define CSORT(v,c) sort(v.begin(),v.end(),c)
#define ALL(v) (v).begin(),(v).end()
#define SQR(x) ((x)*(x))
#define SZ(x) (return (signed int)x.size())
#define DIST(a,b) sqrt(sqr(a.x-b.x) + sqr(a.y-b.y))

// Define CONST Value
#define SIZE 1e9
#define MIN INT_MIN
#define MAX INT_MAX
#define INF 0x7FFFFFFF // check
#define EPS 1e-9
#define PI acos(-1.0)
#define PI2 3.1415926535897932384626433832795
#define MOD 1000000007

// Define Bitwise Operation
#define CHECK(n, pos) (n & (1<<(pos)))
#define BITON(n, pos) (n | (1<<(pos)))
#define BITOFF(n, pos) (n & ~(1<<(pos)))

// Define LOOP Shortcuts
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)

// Define Color
enum {WHITE,GREY,BLACK};

// Sync off with stdio
#define __ cin.sync_with_stdio(false);\
				cin.tie();

// Debug tools
#define what_is(x) cerr<<(#x)<<" is "<<x<<endl

// Typedef's
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef vector<char> VC;
typedef vector<VC> VC2D;
typedef map<int,int> MPII;
typedef map<string,int> MPSI;
typedef map<int,string> MPIS;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef queue<int> QI;
typedef queue<QI> QII;
typedef stack<int> SI;
typedef stack<SI> SII;

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

// Template And Structures

// Point for x,y (int) coordinate in 2D space
struct POINT{
		int x,y;
		POINT(){}
		POINT(int a,int b){x=a,y=b;}
		bool operator==(const POINT &a)const{return x==a.x and y==a.y;}
};

// Point for x,y (double) coordinate in 2D space
struct POINT_DOUBLE{
		double x,y;
		POINT_DOUBLE(){}
		POINT_DOUBLE(double a,double b){x=a,y=b;}
};

// Node for Dijkstra
struct Node{
		int v,w;
		Node() {}
		bool operator<(const Node &a)const{return w>a.w;}
		Node(int _v,int _w){v=_v,w=_w;}
};

namespace my{
		template<class T>T gcd(T a,T b){return b == 0 ? a : gcd(b, a % b);}

		template<typename T>T lcm(T a, T b) {return a / gcd(a,b) * b;}

		template<class T>T big_mod(T n,T p,T m){if(p==0)return (T)1;T x=big_mod(n,p/2,m);x=(x*x)%m;if(p&1)x=(x*n)%m;return x;}

		template<class T>T multiplication(T n,T p,T m){if(p==0)return (T)0;T x=multiplication(n,p/2,m);x=(x+x)%m;if(p&1)x=(x+n)%m;return x;}

		template<class T>T my_pow(T n,T p){if(p==0)return 1;T x=my_pow(n,p/2);x=(x*x);if(p&1)x=(x*n);return x;} ///n to the power p

		template <class T> double getdist(T a, T b){return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));}/// distance between a & b

		template <class T> T extract(string s, T ret) {stringstream ss(s); ss >> ret; return ret;}/// extract words or numbers from a line

		template <class T> string tostring(T n) {stringstream ss; ss << n; return ss.str();}/// convert a number to string

		template<class T> inline T Mod(T n,T m) {return (n%m+m)%m;} ///For Positive Negative No.

		template<class T> T MIN3(T a,T b,T c) {return min(a,min(b,c));} /// minimum of 3 number

		template<class T> T MAX3(T a,T b,T c) {return max(a,max(b,c));} ///maximum of 3 number

		template <class T> void print_vector(T &v){int sz=v.size();if(sz)cout<<v[0];for(int i = 1; i < sz; i++)cout << ' '<<v[i];cout<<"\n";}/// prints all elements in a vector

		bool isVowel(char ch){ ch=toupper(ch); if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E') return true; return false;}

		bool isConsonant(char ch){if (isalpha(ch) && !isVowel(ch)) return true; return false;}
}

namespace debug{
		int sum(){return 0;}
		template<typename T,typename... Args> T sum(T a,Args... args) {return a+sum(args...);}
		void print(){cout<<"\n";return;}template<typename T, typename... Args>void print(T a,Args... args){cout<<a<<" ";print(args...);}
}

// Direction
// int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1}; ///8 Direction
// int dx[4] = {1, 0, -1, 0};int dy[4] = {0, 1, 0, -1}; ///4 Direction
// int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};///Knight Direction
// int dx[]={-1,-1,+0,+1,+1,+0};int dy[]={-1,+1,+2,+1,-1,-2}; ///Hexagonal Direction

/*******  End All Required define Pre-Processors and typedef Constants *******/


/********** Main()  function **********/
int main(){

		//READ("in");
		//WRITE("out");

		int n;
		cin >> n;
		cout << n << endl;
		return 0;
}
/********  Main() Ends Here *************/