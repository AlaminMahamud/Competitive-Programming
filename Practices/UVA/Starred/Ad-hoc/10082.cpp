#include <bits/stdc++.h>

using namespace std;

void back_one_char(char c){
  char d;

  // q
  if(c == 'W') d = 'Q';
  else if(c == 'E') d=='W';
  else if(c == 'R') d=='E';
  else if(c == 'T') d=='R';
  else if(c == 'Y') d=='T';
  else if(c == 'U') d=='Y';
  else if(c == 'I') d=='U';
  else if(c == 'O') d=='I';
  else if(c == 'P') d=='O';
  else if(c == '[') d=='P';
  else if(c == ']') d=='[';
  else if(c == '\\') d==']';
  //s
  else if(c == 'S') d=='A';
  else if(c == 'D') d=='S';
  else if(c == 'F') d=='D';
  else if(c == 'G') d=='F';
  else if(c == 'H') d=='G';
  else if(c == 'J') d=='H';
  else if(c == 'K') d=='J';
  else if(c == 'L') d=='K';
  else if(c == ';') d=='L';
  else if(c == '\'') d==';';

  //z
  else if(c == 'X') d=='Z';
  else if(c == 'C') d=='X';
  else if(c == 'V') d=='C';
  else if(c == 'B') d=='V';
  else if(c == 'N') d=='B';
  else if(c == 'M') d=='N';
  else if(c == ',') d=='M';
  else if(c == '.') d==',';
  else if(c == '/') d=='.';
  //1
  else if(c == '1') d=='`';
  else if(c == '2') d=='1';
  else if(c == '3') d=='2';
  else if(c == '4') d=='3';
  else if(c == '5') d=='4';
  else if(c == '6') d=='5';
  else if(c == '7') d=='6';
  else if(c == '8') d=='7';
  else if(c == '9') d=='8';
  else if(c == '0') d=='9';
  else if(c == '-') d=='0';
  else if(c == '=') d=='-'
  
}

int main(){
  string s;
  getline(cin,s);
  while(cin){
    getline(cin,s);
    int length = s.length();
    for(int i = 0; i < length; i++){
      if(s[i] = ' ') cout << ' ';
      back_one_char(s[i]);
    }
    cout << endl;
  }
  return 0;
}
