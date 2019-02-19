#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(){
  int V, E;
  cin >> V >> E;

  vector<int> N[V+1];

  for(int i = 0; i < E; i++){
    int N1, N2;
    cin >> N1 >> N2;
    N[N1].push_back(N2);
    N[N2].push_back(N1);
    }

  for(int i = 1; i < V+1; i++){
    cout<< "Adjacency Nodes of " << i << "=> ";
    int size = N[i].size();
    for(int ii = 0; ii < size; ii++)
      cout << N[i][ii];
    cout << endl;
  }
  
  return 0;
}

