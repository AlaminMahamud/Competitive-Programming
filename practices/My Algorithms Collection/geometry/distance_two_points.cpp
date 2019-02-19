#include <algorithm>
#include <assert.h> /// NEED TO KNOW ABOUT IT
#include <complex>
#include <ctype.h>
#include <functional>
#include <iostream>
#include <limits.h>
#include <locale.h>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <cmath>
#include <vector>
#include <deque>
//#include <unordered_set>
//#include <unordered_map>

//#pragma warning(disable:4996)
using namespace std;

#define mp make_pair
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ldb;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
typedef pair <ldb, ldb> pldb;

int IT_MAX = 1<<19;
const int MOD = 100000000;
const int INF  = 1034567891;
const ll LL_INF = 1234567890123456789ll;
const db PI = 3.141592653589793238;
const db ERR = 1E-10;


int distance(int a[], int b[]){
    int x = a[0] - b[0];
    int y = a[1] - b[1];
    return sqrt((x*x)+(y*y));
}


int main(){
    // WRITE YOUR CODE HERE,,,
    int a[2]={10,20}, b[2]={20,20};
    cout << distance(a,b) << endl;
    return 0;
}

