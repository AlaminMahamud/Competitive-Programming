#include <iostream>
using namespace std;
int main(){
  int n, x;
  cin >> n >> x;
  //cout << n %6 ;
  if(n%6 == 0) cout << x << endl;  
  else if(n%6 == 1){
    if( x == 0) cout << 1 << endl;
    else if(x == 1) cout << 0 << endl;
    else cout << 2 << endl;
  }
  else if(n%6 == 2) {
    
        if( x == 0) cout << 1 << endl;
        else if(x == 1) cout << 2 << endl;
        else cout << 0 << endl;
}
  else if(n%6 == 3) {
           if( x == 0) cout << 2 << endl;
           else if(x == 1) cout << 1 << endl;
           else cout << 0 << endl;

           
}
  else if(n%6 == 4){
             if( x == 0) cout << 2 << endl;
             else if(x == 1) cout << 0 << endl;
             else cout << 1 << endl;
}
 
else if(n%6 == 5) {
               if( x == 0) cout << 0 << endl;
               else if(x == 1) cout << 2 << endl;
               else cout << 1 << endl;
} 

  return 0;
}
