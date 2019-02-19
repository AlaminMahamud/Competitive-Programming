#include <bits/stdc++.h>
using namespace std;
// struct node
struct node{
  int data;
  struct node* next = NULL;
};


// create_node
struct node * create_node(int data){
  struct node* temp = (struct node*) malloc(sizeof(struct node));
  temp -> data = data;
  return temp;
}


// delete_node
struct node * delete_node(struct node * head, int data){
  struct node * temp, *prev;
  temp = head;
  prev = head;
  int d = 1;
  while(temp){
    
    if(temp->data == data){
      if(d == 1) head = head->next;
      prev->next = temp->next;
      free(temp);
    }
    temp = temp->next;
    d++;
  }
  return head;
}

// linked_list_traversal
void linked_list_traversal(struct node* temp){
  while(temp){
    cout << temp->data << endl;
    temp = temp->next;
  }
}

int main(){
  struct node * head = create_node(1);
  head->next = create_node(2);
  head->next->next = create_node(3);
  head->next->next->next = create_node(4);
  head->next->next->next->next = create_node(5);

  // now start deleting the nodes
  head = delete_node(head,2);

  // last, but not least => linked_list traversal
  linked_list_traversal(head);
  
  return 0;
}
