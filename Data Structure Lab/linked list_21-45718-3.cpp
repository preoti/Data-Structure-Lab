#include <stdlib.h>

#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node* next;
};

void insertFirst(struct Node** head_ref, int new_data) {

  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));


  new_node->data = new_data;
  new_node->next = (*head_ref);
  (*head_ref) = new_node;
}
void insertthen(struct Node* prev_node, int new_data) {
  if (prev_node == NULL) {
  cout << " previous node cannot be NULL";
  return;
  }

  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = new_data;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
}

void insertBack(struct Node** head_ref, int new_data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  struct Node* last = *head_ref;

  new_node->data = new_data;
  new_node->next = NULL;

  if (*head_ref == NULL) {
  *head_ref = new_node;
  return;
  }

  while (last->next != NULL) last = last->next;

  last->next = new_node;
  return;
}

void deleteNode(struct Node** head_ref, int key) {
  struct Node *temp = *head_ref, *prev;

  if (temp != NULL && temp->data == key) {
  *head_ref = temp->next;
  free(temp);
  return;
  }

  while (temp != NULL && temp->data != key) {
  prev = temp;
  temp = temp->next;
  }


  if (temp == NULL) return;
  prev->next = temp->next;
  free(temp);
}

bool searchNode(struct Node** head_ref, int key) {
  struct Node* current = *head_ref;

  while (current != NULL) {
  if (current->data == key) return true;
  current = current->next;
  }
  return false;
}


void printList(struct Node* node) {
  while (node != NULL) {
  cout << node->data << " ";
  node = node->next;
  }
}


int main() {
  struct Node* head = NULL;

  insertBack(&head,  18);
  insertFirst(&head, 33);
  insertBack(&head, 40);
  insertthen(head->next, 56);
  insertthen(head->next, 21);


  cout << "Linked list: ";
  printList(head);

  cout << "\nAfter deleting an element: ";
  deleteNode(&head, 40);
  deleteNode(&head,33);
  printList(head);

  int item_to_find = 33;
  if (searchNode(&head, item_to_find)) {
  cout << endl << item_to_find << " is found";
  } else {
  cout << endl << item_to_find << " is not found";
  }

}
