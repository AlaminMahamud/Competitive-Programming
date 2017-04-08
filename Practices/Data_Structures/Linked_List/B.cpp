#include <cstdio>
#include <cstdlib>

struct Node{
  int V;
  struct Node* next = NULL;
};

struct Node* appendNode(struct Node* temp, int D){
  struct Node* temp2 = (struct Node*)malloc(sizeof(struct Node*));
  temp -> next = temp2;
  temp2 -> V = D;
  return temp2;
};

void add_Node(struct Node* temp, int D){
  struct Node* temp2 = (struct Node*)malloc(sizeof(struct Node*));
  struct Node* temp3 = temp->next;
  temp -> next = temp2;
  temp2 -> V = D;
  temp2 -> next = temp3;

}

int main(){
  struct Node* head = (struct Node*)malloc(sizeof(struct Node*));
  struct Node* temp = head;
  head -> V = 0;
  int d;
  while(true){
    if(d == -1) break;
    scanf("%d",&d);
    temp = appendNode(temp,d);  
  }

  temp = head;
  
  while(temp){
    if(temp->V == 6)
      add_Node(temp, 7);
    temp = temp->next;
  }

  temp = head;
  
  while(temp){
    printf("%d",temp -> V);
    temp = temp -> next;
  }
  
  return 0;
}
