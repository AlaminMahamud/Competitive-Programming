#include <bits/stdc++.h>
using namespace std;

class Disjoint_Set{
  unordered_map<char, char> PARENT;
public:
  Disjoint_Set(){
    char Universe[] = {'a', 'b', 'c', 'd', 'e'}; // Universe of item: 'a', 'b', 'c', 'd', 'e'
    for(char x : Universe){
      PARENT[x] = x; // we have 5 disjoint sets, each set contain one item.
    }
    PARENT['d']='b'; // 'b' and 'd' are in same set.
  }
  char Find(char item){
    if(PARENT[item] == item)
      return item;
    else
      return Find(PARENT[item]);
  }

  void Union(char set_1, char set_2) {
    PARENT[set_1] = set_2;
  }
};

int main(){
  Disjoint_Set ds;
}
