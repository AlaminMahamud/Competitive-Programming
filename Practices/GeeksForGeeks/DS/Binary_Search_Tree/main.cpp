#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node * left;
  struct node * right;
};

struct node * newNode(int data){
  struct node * temp = (struct node*) malloc(sizeof(struct node));
  temp->data = data;
  temp->left = temp->right = NULL;
  return temp;
}

int height(struct node * temp){
  if (temp == NULL) return 0;
  int le = height(temp->left);
  int ri = height(temp->right);
  if(le > ri) return le+1;
  else return ri+1;
}

void levelByLevelTraversal(struct node * node, int level){
  if(node == NULL) return;
  if(level == 1)
    printf("%d\n", node->data);
  else{
    levelByLevelTraversal(node->left, level-1);
    levelByLevelTraversal(node->right, level-1);
  }
}

void levelOrderTraversal(struct node * root){
  int h = height(root) + 1;
  printf("%d", h);
  int i;
  for(i = 1; i < h; i++)
    levelByLevelTraversal(root, i);
}

int main(){
  struct node * root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);
  printf("Printing Data\n");
  levelOrderTraversal(root);
}
