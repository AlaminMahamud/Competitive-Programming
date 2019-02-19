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
#define ASIZE 1000000
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
    int n,f=0,z=0;
    cin>>n;
    while(n--){
        int temp;
        cin >> temp;
        if(temp==5) f++;
        else z++;
    }
    if(z>0){
        bool flag = false;
        while(true) {
            if ((f>0) && (f * 5) % 9 == 0) {
                flag = true;
                while (f--) {
                    cout << 5;
                }
                break;
            } else {
                f--;
                if(f<=0) break;
            }
        }
        if(flag){
            while(z--)
                cout << 0;
            cout << endl;
        }else{
            cout << 0 << endl;
        }
    }
    else
        cout << "-1" << endl;
    return 0;
}
/********  Main() Ends Here *************/
