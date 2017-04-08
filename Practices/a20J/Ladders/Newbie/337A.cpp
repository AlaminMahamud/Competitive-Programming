#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int n,m;
  std::cin >> n >> m;
  int a[m];
  for(int i=0; i<m; i++){
    int d;
    std::cin >> d;
    a[i] = d;
  }

  sort(a,a+m);


  int mini = 1000000;
  for(int i=0; i<m-(n-1); i++){
    int c = a[i+n-1] - a[i];
    if(c<mini){
      mini = c;
    }
  }
  cout << mini << endl;
  return 0;
}
