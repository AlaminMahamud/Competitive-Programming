#include <bits/stdc++.h>

using namespace std;

void dfs(vector<int> *G, int i, bool *arr){
  arr[i] = false;
  cout << i << endl;
  int size = G[i].size();
  for(int j = 0; j < size; j++){
    if(arr[G[i][j]])
      dfs(G, G[i][j], arr);
  }
}


int main(){
  int V,E;
  cin >> V >> E;
  vector<int> Graph[V+1];

  for(int i = 1; i <= E; i++){
    int X, Y;
    cin >> X >> Y;
    Graph[X].push_back(Y);
    Graph[Y].push_back(X);    
  }
  int P;
  cin >> P;
  bool arr[V+1];
  memset(arr, true, sizeof(arr));
  dfs(Graph, P, arr); 
  return 0;
}
