#include <bits/stdc++.h>
using namespace std;

struct car{
  int index;
  double price;
  int prop;
};

int main(){
  int a, b, z = 0;
  while(cin >> a >> b && a && b){
    map<string,int> m;
    string s;
    getline(cin, s);
    for(int i = 0; i < a; i++){
      getline(cin, s);
      m[s] = 1;
    }

    string cars[b];
    struct car p[b];
    for(int i = 0; i < b; i++){
      getline(cin, s);
      cars[i] = s;
      double price;
      int prop;
      cin >> price >> prop;
      getline(cin, s);
      p[i].index = i;
      p[i].price = price;
      p[i].prop = prop;
      for(int ii = 0; ii < prop; ii++)
        getline(cin, s);
    }

    // sorting

    for(int i = 1; i < b; i++){
      for(int j = 0; j < i; j++){
        if(p[i].prop > p[j].prop){
          int temp = p[j].index;
          p[j].index = p[i].index;
          temp = p[j].prop;
          p[j].prop = p[i].prop;
          p[i].prop = temp;
          double temp2;
          temp2 = p[j].price;
          p[j].price = p[i].price;
          p[i].price = temp2;
        }
        else if(p[i].prop == p[j].prop && p[i].price < p[j].price){
          int temp = p[j].index;
          p[j].index = p[i].index;
          temp = p[j].prop;
          p[j].prop = p[i].prop;
          p[i].prop = temp;
          double temp2;
          temp2 = p[j].price;
          p[j].price = p[i].price;
          p[i].price = temp2;
        }
      }
    }
    if(z!=0) cout << endl;
    cout << "RFP #" << ++z << endl;
    cout << cars[p[0].index] << endl;
  }
  return 0;
}
