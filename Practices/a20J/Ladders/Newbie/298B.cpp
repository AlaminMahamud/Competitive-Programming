// In the name of Allah

#include <bits/stdc++.h>
using namespace std;
int main(){
  long long int d, sx, sy, ex, ey;
  cin >> d >> sx >> sy >> ex >> ey;
  string s;
  cin >> s;
  long long int x = ex - sx;
  long long int y = ey - sy;
  long long int i;
  bool west = false, east = false, north = false, south = false;
  if (x < 0) west = true;
  else east = true;
  if (y < 0) south = true;
  else north = true;
  for(i = 0; i < d; i++){
    if(west && x) {if(s[i]=='W') x++;}
    else if(east && x) {if(s[i]=='E') x--;}
    if(north && y) {if(s[i]=='N') y--;}
    else if(south && y) {if(s[i]=='S') y++;}
    if(x == 0 && y == 0) break;
  }
  if(i==d) cout << -1 << endl;
  else cout << i+1 << endl;
  return 0;
}
