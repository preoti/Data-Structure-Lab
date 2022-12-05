#include <bits/stdc++.h>
#include<iostream>
using namespace std;
struct node {
   int data;
   struct node *left;
   struct node *right;
};
struct node *newNode(int val) {
   struct node *temp = (struct node *)malloc(sizeof(struct node));
   temp->data = val;
   temp->left = temp->right = NULL;
   return temp;
}
void inorder(struct node *root) {
   if (root != NULL) {

      inorder(root->left);
      cout<<root->data<<" ";
      inorder(root->right);

   }
}
struct node* insertNode(struct node* node, int val) {
   if (node == NULL) return newNode(val);
   if (val < node->data)
   node->left = insertNode(node->left, val);
   else if (val > node->data)
   node->right = insertNode(node->right, val);
   return node;
}
int main() {
   struct node *root = NULL;
   root = insertNode(root, 4);
   insertNode(root, 5);
   insertNode(root, 2);
   insertNode(root, 11);
   insertNode(root, 1);
   insertNode(root, 3);
   cout<<"In-Order  of the BST is: ";
   inorder(root);
   return 0;
}
