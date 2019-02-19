#include <bits/stdc++.h>
using namespace std;
bool primes[1000002];
vector<int> v;
void generatePrime(){
  memset(primes, true, sizeof(primes));
  primes[0] = false;
  primes[1] = false;

  for(int i = 2; i < 1001; i++){
    if(primes[i])
      for(int j = i * i; j < 1000001; j += i)
        primes[j] = false;
  }

  for(int i = 2; i < 1000001; i++)
    if(primes[i])
      v.push_back(i);
}


void gold(int n){
  map<int, bool> m;
  int z = 0;
  int size = v.size();
  for(int i = 0; i < size; i++){
    if(m[v[i]]) continue;
    int d = n - v[i];
    // bin
    if (d == v[i]) {
      z++;
      m[v[i]] = true;
    }
    else{
      int L = i+1;
      int H = size - 1;
      int M;
      while(L <= H){
        M = (L+H)/2;
        if(v[M]==d) {z++;m[v[i]] = true; m[d] = true; break;}
        else if (v[M] > d) H = M-1;
        else L = M+1;
      }
    }

  }z
  cout << z << endl;
}

int main(){
  generatePrime();
  int n;
  while(cin >> n && n){
    gold(n);
  }
}
