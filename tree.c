#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int value;
  struct Node *left;
  struct Node *right;
} Node;

Node *new_node(int value) {
  Node *n = (Node *)malloc(sizeof(Node));
  n->value = value;
  n->left = n->right = NULL;
  return n;
}

void preorder_traversal(Node *node) {
  if (node == NULL) {
    return;
  }
  printf("%d ", node->value);

  preorder_traversal(node->left);
  preorder_traversal(node->right);
}

void inorder_traversal(Node *node) {
  if (node == NULL) {
    return;
  }
  inorder_traversal(node->left);
  printf("%d ", node->value);
  inorder_traversal(node->right);
}

void postorder_traversal(Node *node) {
  if (node == NULL) {
    return;
  }
  postorder_traversal(node->left);
  postorder_traversal(node->right);
  printf("%d ", node->value);
}

int tree_run() {
  Node *root = new_node(1);

  root->left = new_node(2);
  root->right = new_node(3);
  root->left->left = new_node(4);
  root->left->right = new_node(5);
  root->right->right = new_node(6);

  printf("preorder traversal: \n");
  preorder_traversal(root);
  printf("\n");

  printf("inoder traversal: \n");
  inorder_traversal(root);
  printf("\n");

  printf("postorder traversal: \n");
  postorder_traversal(root);
  printf("\n");

  return 0;
}
