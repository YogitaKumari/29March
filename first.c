#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
  int item;
  struct node* l;
  struct node* r;
};


void pre(struct node* root) {
  if (root == NULL) return;
  printf("%d ->", root->item);
  pre(root->l);
  pre(root->r);
}

void in(struct node* root) {
  if (root == NULL) return;
  in(root->l);
  printf("%d ->", root->item);
  in(root->r);
}

void post(struct node* root) {
  if (root == NULL) return;
  post(root->l);
  post(root->r);
  printf("%d ->", root->item);
}

struct node* createNode(int value) {
  struct node* n = malloc(sizeof(struct node));
  n->item = value;
  n->l = NULL;
  n->r = NULL;

  return n;
}
struct node* inleft(struct node* root, int value)
{
  root->l = createNode(value);
  return root->l;
}
struct node* inright(struct node* root, int value)
{
  root->r = createNode(value);
  return root->r;
}

void main()
{
  struct node* root = createNode(12);
  inleft(root, 4);
  inright(root, 3);

  inleft(root->l, 2);
  inright(root->r, 6);
  printf("Inorder traversal \n");
  in(root);

  printf("\nPreorder traversal \n");
  pre(root);

  printf("\nPostorder traversal \n");
  post(root);
}

