#include<bits/stdc++.h>
using namespace std;

struct node{
  int data;
  struct node * next;
};

struct node* create_node(int value){
  struct node * temp = (struct node*)malloc(sizeof(struct node));
  temp->data = value;
  temp->next = NULL;
  return temp;
}

void linked_list_traversal(struct node* head){
  struct node* temp;
  temp = head;
  while(temp){
    cout << temp->data << endl;
    temp = temp->next;
  }
}
int main(){
  struct node *head = (struct node*)malloc(sizeof(struct node));
  head->data = 1;
  head->next = create_node(2);
  head->next->next = create_node(3);
  linked_list_traversal(head);
  return 0;
}
