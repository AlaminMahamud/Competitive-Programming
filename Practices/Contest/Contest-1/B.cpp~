#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  map<int,int> m;
  for(int i = 0; i < n; i++){
    int d;
    cin >> d;
    m[d]++;
  }

  unsigned long long int cost = 0;
  
  for(map<int, int> :: iterator it = m.begin(); it != m.end(); it++)
    {
      if((it -> second) > 1){
	while(it -> second != 1){
	  int f = it -> first;
	  int prev = f;
	  f++;
	  
	  while(true){
	    if(m[f] == 0) {
	      (m[prev])--;
	      m[f]++;
	      cost += (f) - (prev);
	      break;
	    }
	    else f++;
	  } 
	  
	}
      } 
    }

  cout << cost << endl;
     
  return 0;
}
