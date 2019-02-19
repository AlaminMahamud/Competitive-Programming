#include <bits/stdc++.h>
using namespace std;

int main(){
  int p, j1, j2, r, a;
  cin >> p >> j1 >> j2 >> r >> a;
  bool p1 = true;
  if(a==0){
    if(r == 0){
        if(p == 1){
	  // even
	  if((j1+j2)%2 == 0){
	    // player 1 wins
	    p1 = true; 
	  }else{
	    // player 2 wins
	    p1 = false; 
	  }
    
	}else{
	  // odd
	  if((j1+j2)%2 == 0){
	    // player 2 wins
	    p1 = false; 
	  }else{
	    // player 1 wins
	    p1 = true; 
	  }
	}
    }
    else {
      p1 = true; 
    }
  }
  else{
    if(r == 1){
      p1 = false;
    }else {
      p1 = true; 
    }
  }


  if(p1) cout << "Jogador 1 ganha!" << endl;
  else cout << "Jogador 2 ganha!" << endl;




  return 0;
}
