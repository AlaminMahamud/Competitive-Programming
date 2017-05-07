#include <bits/stdc++.h>
using namespace std;

// struct
struct node{
  int data;
  struct node * next;
};


// create_node
struct node* create_node(int data){
  struct node * temp = (struct node *) malloc(sizeof(struct node));
  temp -> data = data;
  return temp;
}


// insert_node
struct node* insert_node(struct node* before, struct node* end, int data){
  struct node * temp = create_node(data);
  if (before != NULL) {
    before->next = temp;
    return before;
  }else{
    if(end != NULL){
      temp->next =end;
    }
    return temp;
  }
}

// linked_list_traversal
void linked_list_traversal(struct node* temp){
  while(temp){
    cout << temp->data << endl;
    temp = temp->next;
  }
}

int main(){
  // first adding node before head;
  struct node * head = create_node(1);
  head = insert_node(NULL,head,2);
  linked_list_traversal(head);
  return 0;
}
