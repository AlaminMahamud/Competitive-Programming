#include <bits/stdc++.h>
using namespace std;
bool primes[1002];
vector<int> u;
void generatePrime(){
  memset(primes, true, sizeof(primes));

  for(int i = 2; i < 35; i++){
    if(primes[i] == true)
      for(int j = i * i; j < 1001; j += i)
        primes[j] = false;
  }
}

void print(){
  for(vector<int>::const_iterator it = u.begin(); it!=u.end(); it++)
        cout << " " << *it;
  cout << endl;
  return;
}

void findMidPushVec(int N, int c){
  u.clear();

  for(int i = 1; ; i++){
    if(i > N) break;
    if(primes[i])u.push_back(i);
  }

  int low, high;
  int size = u.size();
  if(size%2 == 0){
    if(size < 2*c){
      print();
      return;
    }
      low = size/2 - c;
      high = low + (2*c);


  }else{
    if(size < 2*c - 1){
      print();
      return;
    }
    low = size/2 - c + 1;
    high = low + (2*c - 1);

  }

  for(int i = low; i < high; i++)
      cout << " " << u[i];
   cout << endl;

}

int main(){
  generatePrime(); // 1---1000
  int N, c;
  while(scanf("%d %d", &N, &c) == 2){

    cout << N << " " << c << ":";
    findMidPushVec(N,c); //
    cout << endl;
  }
  return 0;
}
