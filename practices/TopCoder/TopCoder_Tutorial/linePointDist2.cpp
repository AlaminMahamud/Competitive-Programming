/*
** Note: This template uses some c++11 functions , so you have to compile it with c++11 flag.
**       Example:-   $ g++ -std=c++11 c++Template.cpp
**
** Author : Md. Alamin Mahamud
** Handle: A1am1N
**/

/********   All Required Header Files ********/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
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

//Compute the dot product AB ⋅ BC
int dot(int[] A, int[] B, int[] C){
    AB = new int[2];
    BC = new int[2];
    AB[0] = B[0]-A[0];
    AB[1] = B[1]-A[1];
    BC[0] = C[0]-B[0];
    BC[1] = C[1]-B[1];
    int dot = AB[0] * BC[0] + AB[1] * BC[1];
    return dot;
}
//Compute the cross product AB x AC
int cross(int[] A, int[] B, int[] C){
    AB = new int[2];
    AC = new int[2];
    AB[0] = B[0]-A[0];
    AB[1] = B[1]-A[1];
    AC[0] = C[0]-A[0];
    AC[1] = C[1]-A[1];
    int cross = AB[0] * AC[1] - AB[1] * AC[0];
    return cross;
}
//Compute the distance from A to B
double distance(int[] A, int[] B){
    int d1 = A[0] - B[0];
    int d2 = A[1] - B[1];
    return sqrt(d1*d1+d2*d2);
}

// Compute the distance from AB To Check
// if isSegment is true, AB is a segment, not a line
double linePointDist(point A, point B, point C, bool isSegment){
  double dist = ((B-A)^(C-A))/sqrt((B-A)*(B-A));
  if (isSegment)
  {
    int dot1 = (C - A) * (B - A);
    if (dot1 > 0)
      return sqrt((B-C)*(B-C));
    int dot2 = (C-A)*(A-B);
    if (dot2 > 0)
      return sqrt((A-C)*(A-C));
    }
    return abs(dist);
}

/********** Main()  function **********/
int main(){
    
    int tc;
    cin>>tc;

    while(tc--){
        cout<<tc;
    }

    return 0;
}
/********  Main() Ends Here *************/