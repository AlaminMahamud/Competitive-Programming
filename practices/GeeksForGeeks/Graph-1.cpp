#include <cstdio>
#include <cstdlib>

struct AdjListNode {
  int dest ;
  struct AdjListNode * next = NULL;
};


struct AdjList {
  struct AdjListNode * head;
};


struct Graph {
  int V;
  struct AdjList * array;
};



struct Graph * createGraph(int V) {
  struct Graph * graph = (struct Graph * ) malloc(sizeof(struct Graph));
  graph -> V = V;
  graph -> array = (struct AdjList * ) malloc( V * sizeof(struct AdjList));

  for(int i=0; i<V; i++){
    graph->array[i].head = NULL;
  }

  return graph;
}

struct AdjListNode * newAdjListNode(int dest){
  struct AdjListNode * newNode = (struct AdjListNode * ) malloc(sizeof(struct AdjListNode));
  newNode -> dest = dest;
  newNode -> next = NULL;

  return newNode;
}

void addEdge (struct Graph * graph, int src, int dest) {

  struct AdjListNode * node = (struct AdjListNode * ) (malloc(sizeof(struct AdjListNode)));
  struct AdjListNode * node2 = (struct AdjListNode * ) (malloc(sizeof(struct AdjListNode)));

  node -> dest = dest;
  node2 -> dest = src;

  node -> next = graph->array[src].head;
  graph -> array[src].head = node;

  node2 -> next = graph->array[dest].head;
  graph -> array[dest].head = node2;
}

void printGraph(struct Graph * graph){
  int V = graph->V;
  for(int i=0; i<V; i++){
    printf("Printing the vertices %d\nhead",i);
    struct AdjListNode * crawler =  graph->array[i].head;
    while(crawler){
      printf("->%d",crawler->dest);
      crawler=crawler->next;
    }
    printf("\n");
  }
}

int main(){
  int V;
  scanf("%d", &V);
  struct Graph * graph = createGraph(V);
  addEdge(graph,0,1);
  addEdge(graph,0,4);
  addEdge(graph,1,2);
  addEdge(graph,1,3);

  addEdge(graph,1,4);
  addEdge(graph,2,3);
  addEdge(graph,3,4);
  printGraph(graph);
  return 0;
}
