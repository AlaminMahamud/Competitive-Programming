#include <bits/stdc++.h>

using namespace std;

int main(){

  int n;
  cin >> n;
  map<int,int> m;
  m[1] = m[2] = m[3] = m[4] = 0;
  for(int i = 0; i < n; i++){
    int d = 0;
    cin >> d;
    m[d]++;
  }

  int val = m[4];
  if(m[3] >= m[1]){
    val += m[1];
    m[3] -= m [1];
    m[1] = 0;
  }else{

    
      val +=  m[3];
      m[1] -= m[3];
      m[3] = 0;
    
  }

  val += m[3];
  val += m[1];

  val += (m[2]/2);

  if(m[2]%2 != 0) val++;
    
  cout << val << endl;  
    
  return 0;
}
