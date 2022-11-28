#include <iostream>
using namespace std;


struct Node {
  int data;
  struct Node* next;
  struct Node* prev;
};


void insertFront(struct Node** head, int data) {

  struct Node* newNode = new Node;

  newNode->data = data;

  newNode->next = (*head);

  newNode->prev = NULL;

  if ((*head) != NULL)
    (*head)->prev = newNode;


  (*head) = newNode;
}


void insertBefore(struct Node* next_node, int data) {

  if (next_node == NULL) {
    cout << "next node cannot be null";
    return;
  }

  struct Node* newNode = new Node;

  newNode->data = data;
  newNode->next = next_node->next;

  next_node->next = newNode;

  newNode->prev = next_node;

  if (newNode->next != NULL)
    newNode->next->prev = newNode;
}

void insertEnd(struct Node** head, int data) {
  struct Node* newNode = new Node;

  newNode->data = data;

  newNode->next = NULL;

  struct Node* temp = *head;

  if (*head == NULL) {
    newNode->prev = NULL;
    *head = newNode;
    return;
  }

  while (temp->next != NULL)
    temp = temp->next;


  temp->next = newNode;

  newNode->prev = temp;
}


void displayList(struct Node* node) {
  struct Node* last;

  while (node != NULL) {
    cout << node->data << "->";
    last = node;
    node = node->next;
  }
  if (node == NULL)
    cout << "NULL\n";
}

int main() {
  struct Node* head = NULL;

  insertEnd(&head, 5);
  insertFront(&head, 1);


  insertBefore(head, 11);



  displayList(head);


}
