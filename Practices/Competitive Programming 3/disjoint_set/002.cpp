#include <bits/stdc++.h>
using namespace std;

class Disjoint_Set{
  // Hashtable to store node's information
  unordered_map<char, char> PARENT;
public:
  Disjoint_Set(){
    char[] Universe = {'a', 'b', 'c', 'd', 'e'};
    for(char x : Universe){
      PARENT[x] = x;
    }
    // to make thing interesting i need to create a subset of two components
    PARENT['d'] = 'b';
  }

  char Find(char item){
    if(PARENT[item] == item)
      return item;
    else
      return Find(PARENT[item]);
  }

  void Union(char set_1, char set_2){
    PARENT[set_1] = set_2;
  }
};

int main(){
  Disjoint_Set ds;
}
