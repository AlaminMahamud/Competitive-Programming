#include <bits/stdc++.h>
using namespace std;

bool primes[1000001];
vector<int> p;
void generatePrime(){
  memset(primes, true, sizeof(primes));
  primes[0] = false;
  primes[1] = false;

  for(int i = 2; i < 1001; i++){
    if(primes[i]){
      for(int j = i * i ; j < 1000001; j+=i)
        primes[j] = false;
    }
  }
  p.push_back(2);
  for(int i = 3; i < 1000001; i+=2)
    if(primes[i])
      p.push_back(i);
}

void gold(int n){
  int size = p.size();
  bool flag = false;
  int last = 0;
  for(int i = 0; i < size; i++){
    if(p[i]%2==0) continue;
    int d = n - p[i];

    if(d < 0) break;
    if(d%2 == 0) continue;

    // bin search
    int lo = i+1;
    int hi = size-1;
    int m = 0;

    while(lo <= hi){
      m = (lo + hi) / 2;

      if(p[m] == d) {
        flag = true;
        break;
      }
      if(p[m] > d) hi = m - 1;
      else lo = m + 1;
    }

    if(flag){
      cout << n << " = " << p[i] << " + " << p[m] << endl;
      return;
    }

    if(d==p[i]) {
           cout << n << " = " << p[i] << " + " << d << endl;
           return;
    }

  }

  cout << "Goldbach's conjecture is wrong." << endl;
}

int main(){
  generatePrime();
  int n;
  while(cin >> n && n){
      gold(n);
  }
  return 0;
}
