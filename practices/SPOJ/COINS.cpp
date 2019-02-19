/*
** Note: This template uses some c++11 functions , so you have to compile it with c++11 flag.
**       Example:-   $ g++ -std=c++11 c++Template.cpp
**
** Author : Md. Alamin Mahamud
** Handle: A1am1N [CodeForces]
** Handle: alamin2016 [SPOJ]
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
#define ll long long 
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

map<int, unsigned long int> mymap;
map<int, bool> flag;

unsigned long int solve(unsigned long int n){
  if(flag.at(n))
    return mymap.at(n);
  else if(n<12){
    flag.at(n) = true;
    mymap.at(n) = n;
    return n;
  }else{
    unsigned long int n2=(n/2), n3=(n/3),n4=(n/4),sum=0;
    if(flag.at(n2))
      n2 = mymap.at(n2);
    else
    {
      n2 = solve(n2);
    }
    if(flag.at(n3))
      n3 = mymap.at(n3);
    else
    {
      n3 = solve(n3);
    }
    if(flag.at(n4))
      n4 = mymap.at(n4);
    else
    {
      n4 = solve(n4);
    }
    sum = n2 + n3 + n4;
    if(sum<n){
      flag.at(n) = true;
      mymap.at(n) = n;
      return n;
    }else{
      flag.at(n) = true;
      mymap.at(n) = sum;
      return sum;
    }
  }
}

/********** Main()  function **********/
int main(){
  int n;
  cin>>n;
  cout <<  solve(n) << endl;
  return 0;
}
/********  Main() Ends Here *************/