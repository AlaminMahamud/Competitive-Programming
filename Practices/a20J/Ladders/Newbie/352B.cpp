#include <bits/stdc++.h>
#define REP(i, n) for(int i = 1; i <= n; i++)
#define SIZE 100000

using namespace std;

int arr[SIZE + 5];
bool mark[SIZE + 5];
int secondarr[SIZE+5];
int main(){
  int n;
  cin >> n;

  memset(mark, false, sizeof(mark));
  memset(arr, -1, sizeof(arr));
  memset(secondarr, 0, sizeof(secondarr));

  int count = 0;
  int ma = 0;
  REP(i,n){
    int d;
    cin >> d;
    
    ma = max(ma,d);
   
    if(arr[d] == -1){
      arr[d] = i;
       count++;
    }
    
    else if(mark[d] == false && arr[d] != -2){
         mark[d] = true;
         secondarr[d]  = (i - arr[d]);
	 arr[d] = i;
    }else if (mark[d] == true && arr[d] != -2){
      if(secondarr[d] != (i - arr[d])){
	 mark[d] = false;
	 arr[d] = -2;
	 count--;
      }   
      else arr[d] = i;
    }

  }

  cout << count << endl;
  
  REP(i, ma){
    
    if(arr[i] > 0)
      {
	cout << i << " ";
	if(mark[i] == false && arr[i] != -2) cout << 0 << endl;
	else cout << secondarr[i] << endl;
      }
  }
  
}
