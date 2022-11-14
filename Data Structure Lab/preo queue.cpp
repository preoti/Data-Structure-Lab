#include <iostream>
using namespace std;
int queue[4], n = 4, front = - 1, rear = - 1;
void Enqueue() {
   int value;
   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert element : "<<endl;
      cin>>value;
      rear++;
      queue[rear] = value;
   }
}
void Dequeue() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {
   int choice;
   cout<<"1) Insert element"<<endl;
   cout<<"2) Delete element"<<endl;
   cout<<"3) Display all elements"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : "<<endl;
      cin>>choice;
      switch (choice) {
         case 1: Enqueue();
         break;
         case 2: Dequeue();
         break;
         case 3: Display();
         break;
         case 4: cout<<"exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(choice!=4);
   return 0;
}
