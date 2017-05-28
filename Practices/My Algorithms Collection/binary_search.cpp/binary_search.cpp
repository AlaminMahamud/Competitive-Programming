#include <bits/stdc++.h>
using namespace std;

int binary_search(int A[], int target, int n){
  int low = 0;
  int high = n - 1;
  int mid;

  while(low < high){
      mid = ((unsigned int)low + (unsigned int)high) >> 1;
      if(A[mid] == target) return mid;
      else if(A[mid] < target) low = mid + 1;
      else high = mid - 1;
  }
  return mid;
}
