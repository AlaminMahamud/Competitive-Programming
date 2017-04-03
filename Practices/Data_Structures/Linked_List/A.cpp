#include <cstdio>
#include <cstdlib>


//creating the Node of Linked List
struct Node {
  int V;
  struct Node* next = NULL;
};

int main(){
  struct Node * head = NULL;
  struct Node * first = NULL;
  struct Node * second = NULL;

  head = (struct Node * ) malloc(sizeof(struct Node*));
  head -> V = 1;
  first = (struct Node * ) malloc(sizeof(struct Node*));
  first -> V = 2;
  head -> next = first;
  second = (struct Node *) malloc(sizeof(struct Node*));
  second -> V = 3;
  first -> next = second;

  struct Node * temp = head;
  while(temp){
    printf("%d",temp->V);
    temp = temp -> next;
  }

  
  return 0;
}
