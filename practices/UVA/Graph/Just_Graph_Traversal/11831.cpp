#include <bits/stdc++.h>
using namespace std;

int i,j;
char G[101][101];
bool B[101][101];
bool possible (int N, int M, char current){

  int prev = i;
  int prevj = j;

  if(current == 'N'){
    i = i-1;
  }
  else if(current == 'S'){
    i = i+1;
  }
  else if(current == 'L'){
    j = j+1;
  }
  else if(current == 'O'){
    j = j-1;
  }
  
  if(G[i][j] != '#' && i >= 0 && j >= 0 && i < N && j < M)
    return true;

  i = prev;
  j = prevj;
  return false;

}

int main(){
  int N,M,S;
  while(cin >> N >> M >> S){
    if(N == 0 && M == 0 && S == 0) break;
    char G[N][M], current;
    memset(B, true, sizeof(B));
    int counter = 0;

    for(int ii = 0; ii < N; ii++){
      for(int jj = 0; jj < M; jj++){
	cin >> G[ii][jj];
	if(G[ii][jj] == 'N' || G[ii][jj] == 'S' || G[ii][jj] == 'L' || G[ii][jj] =='O') {
	  i = ii; j = jj;
	  current = G[ii][jj];
	}
      }
    }

    string s;
    cin >> s;
    
    for(int ii = 0; ii < S; ii++){
      if(s[ii] == 'F') {
	//		cout << current << endl;
	//		cout << i << " " << j << endl;

	bool possible = true;
	int prev = i;
	int prevj = j;

	if(current == 'N'){
	    i = i-1;
	  }
	  else if(current == 'S'){
	    i = i+1;
	  }
	  else if(current == 'L'){
	    j = j+1;
	  }
	  else if(current == 'O'){
	    j = j-1;
	  }

	  if(G[i][j] != '#' && i >= 0 && j >= 0 && i < N && j < M)
	    possible = true;
	  else{
	    i = prev;
	    j = prevj;
	    possible = false;
	  }
	
	if(possible){
	  if(G[i][j] == '*' && B[i][j]) {
	    counter++;
	    B[i][j] = false;
	  }
	}
      }
      else if(s[ii] == 'D') {
	if(current == 'N') current = 'L';
	else if (current == 'L') current = 'S';
	else if (current == 'S') current = 'O';
	else current = 'N';
      }
      else if(s[ii] == 'E') {
	if(current == 'N') current = 'O';
	else if (current == 'O') current = 'S';
	else if (current == 'S') current = 'L';
	else current = 'N';
      }
    }

    cout << counter << endl;
  }
  return 0;
}
