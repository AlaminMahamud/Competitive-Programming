#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < n; i++)
#define valid(NX,NY,X,Y) NX >= 0 && NX <= X && NY >= 0 && NY <= Y 
using namespace std;

int X, Y;
int CX,CY;
int NX,NY;
char CO,NO;

bool scent[55][55];

bool check_valid(){
  if(NO == 'N'){
    NX = CX; NY = CY + 1;
  }else if(NO == 'S'){
    NX = CX; NY = CY - 1;
  }else if(NO == 'W'){
    NX = CX - 1; NY = CY;
  }else{
    NX = CX + 1; NY = CY;
  }
  if(valid (NX,NY,X,Y)) return true;
  else return false;
}


void adjust_orientation(char c){
  if(c == 'L'){
    if(NO == 'N') NO = 'W';
    else if(NO == 'W') NO = 'S';
    else if(NO == 'S') NO = 'E';
    else NO = 'N';
  }
  else{
    if(NO == 'N') NO = 'E';
    else if(NO == 'E') NO = 'S';
    else if(NO == 'S') NO = 'W';
    else NO = 'N';
  }
}

int main(){
  cin >> X >> Y;
  memset(scent, false, sizeof(scent));
  while(cin){
    
    cin >> CX >> CY >> CO;
    NO = CO;

    bool lost = false;
    
    string s;
    cin >> s;

    int len = s.length();
    REP(i,len){
      //cout << s[i] << " " << CX << " " << CY <<  " " << NO << endl;
      if(s[i] == 'F'){
	// if valid it will move
	if(check_valid()){
	  CX = NX; CY = NY;
	}
	// else if scent true ignore

	// else if scent false move and ignore and leave a cent
	else if(scent[CX][CY] == false){
	  // cout << "I am Here" <<endl;
	  scent[CX][CY] = true;
	  lost = true;
	  break;
	}
      }
      else adjust_orientation(s[i]);
    }

    cout << CX << " " << CY << " " << NO ;
    if(lost) cout << " LOST";
    cout << endl;
  }

  return 0;
}
