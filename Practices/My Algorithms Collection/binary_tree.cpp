/*
 *  Binary Trees in C++: Part 1
 The binary tree is a fundamental data structure used in computer science.
 The binary tree is a useful data structure for rapidly storing sorted data and rapidly retrieving stored data.
 A binary tree is composed of parent nodes, or leaves, each of which stores data nad also links to up to two other child nodes (leaves) which can be visualized spatially as below the first node with one placed to the left and with one placed to the right.
 It is the relationship between the leaves linked to and the linking leaf, also known as the parent node, which makes the binary tree such an efficient data structure.
 It is the leaf on the left which has a lesser key value (i.e., the value used to search for a leaf in the tree), and it is the leaf on the right which has an equal or greater key value.
 As a result, the leaves on the farthest left of the tree have the lowest values, whereas the leaves on the right of the tree have the greatest values.
 More importantly, as each leaf connects to two other leaves, it is the beginning of a new, smaller, binary tree.
 Due to this nature, it is possible to easily access and insert data in a binary tree using search and insert functions recursively called on successive leaves.



 The typical graphical representation of a binary tree is essentially that of an upside down tree.
 It begins with a root node, which contains the original key value.
 The root node has two child nodes; each child node might have its own child nodes.
 Ideally, the tree would be structures so that it is a perfectly balanced tree, with each node having the same number of child nodes to its left and to its right.
 A perfectly balanced tree allows for the fastest average insertion of dat or retrieval of data.
 The worst case scenario is a tree in whcih each node only has one child node, so it becomes as if it were a linked list in terms of speed.
 The typical representation of a binary tree looks like the following:


 The node storing the 10, represented here merly as 10, is the root node, linking to the left and right child nodes, with the left node storing a lower value than the parent node and the node on the right storing a greater value than the parent node.
 Notice that if one removed the root node and the right child nodes, that the node storing the value 6 would be the equivalent a new smaller binary tree.

 The structure of a binary tree makes the insertion and search function simple to implement using recursion. In fact, the two insertion and search functions are also both very similar. To insert data into a binary tree involves a function searching for an unused node in the proper position in the tree in which to insert the key value. The insert  function is generally a recursive function that continues moving down the levels of a binary tree untiol there is an unused leaf in  a position which follows the rules of placing nodes. the rules are that a lower value should be to the left of the node, and a greater or equal value should be to the right.
 Following the rules, an stored along with the key value (in most implementations, an empty node will simply be a NULL pointer form a parent node, so the functio would also have to create the node). if the node is filled already, the insert functin should check to see if the key value to be inserted is less than the key value of the current onde, and if so, the inset funciton should be recursively called on the left child node, or if the key value to be inserted is greater than or equal to the key value of the current node the insert function should be recursively called on the right child node.
 The search function works along a similar fashion. It should chedk to see if the value to be searched for is less than the value of the node, in which case it should be recursively called on the left child nod, or if it is greater than the value of the node, it should be recursively called on the right child node.
 Of Course, it is also necessary to check to ensure that the left or right child node actually exists before calling the function on the node.

 Because binary trees have log (base 2) n layers, the average search time for a binary tree is log (base 2)n. to fill an entire binary tree, sorted, takes roughly log (base 2) n*n. Let's take a look at the necessary code for a simple implementation of a binary tree. First, it is necessary to have a struct, or class, defined as a node.



*/


#include <bits/stdc++.h>
using namespace std;

// struct node
struct node {
  int key_value;
  node *left;
  node *right;
};

class btree{
public:
  btree();
  ~btree();

  void insert(int key);
  node *search(int key);
  void destroy_tree();
private:
  void destroy_tree(node *leaf);
  void insert(int key, node *leaf);
  node *search(int key, node *leaf);

  node *root;
};


btree::btree(){
  root = NULL;
}

btree::~btree(){
  destory_tree();
}

void btree::insert(int key, node *leaf){
  if(key < leaf->key_value){
    if(leaf->left != NULL){
      insert(key, leaf->left);
    }else{
      leaf->left = new node;
      leaf->left->key_value = key;
      leaf->left->left = NULL; // Sets the left child of the child node to null
      leaf->left->right = NULL; // Sets the right child of the child node to null
    }
  }else if(key >= leaf->key_value){
    if(leaf->right != NULL){
      insert(key, leaf->right);
    }else{
      leaf->right = new node;
      leaf->right->key_value = key;
      leaf->right->left = NULL; // Sets the left child of the child node to NULL
      leaf->right->right = NULL; // Sets the right child of the child node to NULL
    }
  }
}

node *btree::search(int key, node *leaf){
  if(leaf != NULL){
    if(key == leaf->key_value)
      return leaf;
    if(key < leaf->key_value)
      return search(key, leaf->left);
    else
      return search(key, leaf->right);
  }
  else return NULL;
}

void btree::insert(int key){
  if(root != NULL)
    insert(key, root);
  else{
    root = new node;
    root -> key_value = key;
    root -> left = NULL;
    root -> right = NULL;
  }
}

node *btree::search(int key){
  return search(key, root);
}

void btree::destroy_tree(){
  destroy_tree(root);
}
