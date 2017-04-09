#include <bits/stdc++.h>
using namespace std;

int m[1000];
bool arr[11];


bool check_digits(int n){
  while(n/10){
    if(arr[n%10]) return false;
    arr[n%10] = true;
    n /= 10;
  }
  return true;
}

int main(){
  int c = 0;
  memset(m, 0, sizeof(m));

  for(int i = 1; i < 10; i++){
    for(int j = 0; j < 10; j++){
      for(int k = 0; k < 10; k++){
	memset(arr,false,sizeof(arr));
	if(i != j && j != k && k != i){
	  arr[i] = true;
	  arr[j] = true;
	  arr[k] = true;

	  int first = i*100 + j*10 + k;
	  int second = first * 2;
	  int third = first * 3;

	  if(second >= 1000 || third >= 1000) continue;
	  if(check_digits(second) && check_digits(third))
	    m[c++] = first;
	}
      }
    }
  }


  for(int i = 0; i < c; i++)
    cout << m[i] << " " << m[i] * 2 << " " << m[i] * 3 << " " << endl;

  return 0;

}
