#include <bits/stdc++.h>
using namespace std;

// create Node Struct
struct node{
  int data;
  struct node* left;
  struct node* right;
};

// create New_Node function
struct node * New_Node(int data){
  struct node* node = (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->left = node->right = NULL;
  return node;
}

void print_Node(struct node* root){
  cout << root->data << endl;
  if(root->left){
    cout << "/" << endl;
    print_Node(root->left);
  }
  if(root->right){
    cout << "\\" << endl;
    print_Node(root->right);
  }
}

int main(){
  // create root node
  struct node * root = New_Node(1);
  // create descendents
  root->left = New_Node(2);
  root->right = New_Node(3);
  root->left->left = New_Node(4);
  root->right->right = New_Node(5);
  // print Nodes
  cout << "tree" << endl;
  cout << "----" << endl;
  print_Node(root);
  return 0;
}
