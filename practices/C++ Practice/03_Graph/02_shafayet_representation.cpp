#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

#define MAX 100000  // MAX node

vector<int> edges[MAX];
vector<int> costs[MAX]; // Parallel Vector To store Costs

int main(){
    int N,E,i;
    scanf("%d%d",&N,&E);
    for(i=1;i<=E;i++){
        int x, y;
        scanf("%d %d", &x, &y);
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    for(int j=1; j<=10; j++){        
        int sizeofone = edges[j].size();
        cout << j << endl;
        for(int i=0; i<=sizeofone; i++)
            printf("%d\t", edges[j][i]);
        cout << endl;
    }
    return  0;
}