// C++ Program to Implement Binary Search Tree

// This C++ Program demonstrates operations on Binary Search Tree.

// Here is source code of the C++ Program to demonstrate Binary Tree. The C++ program is successfully compiled and run on  a linux System. The program output is also shown below.

/*
  C++ Program to implement BST
 */


#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * Node Declaration
 */

struct node{
  int info;
  struct node *left;
  struct node *right;
}*root;

// Class Declaration

class BST{
public:
  void find(int, node **, node **);
  void insert(node *, node *);
  void del(int);
  void case_a(node *, node *);
  void case_b(node *, node *);
  void case_c(node *, node *);
  void preorder(node *);
  void inorder(node *);
  void postorder(node *);
  void display(node *, int);
  BST(){
    root = NULL;
  }
};

// insert method
// root, temp node
void BST::insert(node *tree, node *newnode){
  // first check whether the root node  is null;
  if (root == NULL) {
    root = new node;
    root->info = newnode->info;
    root->left = NULL;
    root->right = NULL;
    cout << "Root Node is added." << endl;
    return;
  }

  // check whether the node is already exists
  if (tree->info == newnode->info) {
    cout << "Element is already in the tree" << endl;
    return;
  }

  // if value is lesser then root
  if (tree->info > newnode->info) {
    if (tree->left != NULL)
      insert(tree->left, newnode);
    else {
      tree->left = new node;
      tree->left->info = newnode->info;
      tree->left->left = NULL;
      tree->left->right = NULL;
      cout << "Node added to the left" << endl;
      return;
    }
  } else {
    if (tree->right != NULL)
      insert(tree->right, newnode);
    else {
      tree->right = new node;
      tree->right->info = newnode->info;
      tree->right->left = NULL;
      tree->right->right = NULL;
      cout << "Node added to the right" << endl;
      return;
    }
  }
}

// Main Contains Menu
int main(){
  int choice, num;
  BST bst;
  node *temp;

  while(1){
    cout << "-------------------" << endl;
    cout << "Operations on BST--" << endl;
    cout << "-------------------" << endl;
    cout << "1. Insert Element" << endl;
    cout << "2. Delete Element" << endl;
    cout << "3. Inorder Traversal" << endl;
    cout << "4. Preorder Traversal" << endl;
    cout << "5. Postorder Traversal" << endl;
    cout << "6. Display" << endl;
    cout << "7. Quit" << endl;
    cout << "Enter Your Choice! : ";
    cin >> choice;
    switch(choice){
    case 1:
      // insert
      temp = new node;
      cout << "Enter the number to be inserted :";
      cin >> temp->info;
      bst.insert(root, temp);
      break;
    case 2:
      // delete
      break;
    default:
      break;
    }

  }
}
