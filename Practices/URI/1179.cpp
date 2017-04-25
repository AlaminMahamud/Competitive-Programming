#include <bits/stdc++.h>
using namespace std;

int main(){
  int p[5];
  int i[5];
  int d;

  int pp = 0;
  int ii = 0;
  for(int ji = 0; ji < 15; ji++){
    cin >> d;
    
    if(abs(d)%2 == 0) p[pp++] = d;
    else i[ii++] = d;

    if(pp == 5){
      for(int z = 0; z < 5; z++){
        cout << "par["<< z <<"] = " << p[z] << endl;
        p[z] = 0;
      }
      pp=0;
    }else if(ii == 5){
      for(int z = 0; z < 5; z++){
        cout << "impar["<< z <<"] = " << i[z] << endl;
        i[z] = 0;
      }
      ii=0;
    }
  }
      for(int z = 0; z < ii; z++){
        cout << "impar["<< z <<"] = " << i[z] << endl;
      } 
      for(int z = 0; z < pp; z++){
        cout << "par["<< z <<"] = " << p[z] << endl;
      } 

  
  return 0;
}
