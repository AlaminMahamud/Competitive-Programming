#include <vector>
#include <cstdio>
#include <iostream>

using namespace std;

#define MAX 100000


vector<int> edges[MAX];
vector<int> cost[MAX];

int main(){
  int V, E;
  scanf("%d %d", &V, &E);

  for(int i = 1; i <= E; i++){
    int x, y;
    scanf("%d %d", &x, &y);

    edges[x].push_back(y);
    edges[y].push_back(x);

    cost[x].push_back(1);
    cost[y].push_back(1);
  }


  for( int i = 1; i <= V; i++){
    printf("Vertex %d => ", i );
    int size = edges[i].size();
    for(int j = 0; j < size; j++){
      cout << edges[i][j] << " ";
    }
    cout << endl;
  }
  
  return 0;
}
