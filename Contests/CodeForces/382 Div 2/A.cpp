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

/********** Main()  function **********/
int main(){

  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int size = s.size();
  int g, t;
  
  for (int i = 0; i < size; i++){
    if(s[i]=='G')
      g = i;
    else if(s[i]=='T')
      t = i;
  }
  bool flag = false;
  if(g-t>0){
    for (int i = g-k; i >= t; i-=k){
      if(s[i]=='#'){
        cout << "NO" << endl;
        flag = true;
        break;
      }else if(s[i]=='T'){
        cout << "YES" << endl;
        flag = true;
        break;
      }
    }
    if(!flag)
    cout << "NO" << endl;
  }
  else if(g-t<0){
    for (int i = g + k; i <= t; i+=k){
      if(s[i]=='#'){
        cout << "NO" << endl;
        flag = true;
        break;
      }else if(s[i]=='T'){
        cout << "YES" << endl;
        flag = true;
        break;
      }
    }
    if(!flag)
    cout << "NO" << endl;
  }

    return 0;
}
/********  Main() Ends Here *************/