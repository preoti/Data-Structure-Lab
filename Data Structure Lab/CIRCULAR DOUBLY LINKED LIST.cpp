#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

class LinkedList {
   public:
        Node* head;
public:
    LinkedList(){
      head = NULL;
    }


    void PrintList() {
      Node* temp = head;
      if(temp != NULL) {
        cout<<"doubly linked list is: ";
        while(true) {
          cout<<temp->data<<" ";
          temp = temp->next;
          if(temp == head)
            break;
        }
        cout<<endl;
      } else {
        cout<<"The list is empty.\n";
      }
    }
};


int main() {

  LinkedList List;
  Node* first = new Node();
  first->data = 10;
  first->next = NULL;
  first->prev = NULL;

  List.head = first;
  first->next = List.head;
  List.head->prev = first;


  Node* second = new Node();
  second->data = 22;
  second->next = NULL;

  second->prev = first;
  first->next = second;

  second->next = List.head;

  List.head->prev = second;


  Node* third = new Node();
  third->data = 33;
  third->next = NULL;

  third->prev = second;
  second->next = third;

  third->next = List.head;

  List.head->prev = third;

  List.PrintList();
  return 0;
}
