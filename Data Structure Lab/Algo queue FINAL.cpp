#include <bits/stdc++.h>
using namespace std;

template<typename T>

class Queue
{
private:
T *a;
int Front;
int Rear;
int n;


public:

    Queue(int n)
    {
        this->n = n;
        Front = -1;
        Rear = -1;
        a = new T[n];
    }


int isFull()
{
    if(Rear == n-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int isEmpty()
{

    if(Front == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}




void enQueue(T value)
{

    if(!isFull())
    {
    Front = 0;
    Rear++;
    a[Rear] = value;
    }
    else
    {
    cout << endl<< "Queue is full!!";
    }


}

void deQueue()
{

if(!isEmpty())
{
    Front++;

}else
{
    cout << "Queue is empty!!" << endl;
}

}



void display()
{
    if(isEmpty())
        {
            cout << endl << "Queue is Empty!!" << endl;
        }
    else
    {
        for(int i = Front ; i <= Rear; i++)
        {
            cout << a[i] << endl;
        }
    }
}


};


int main()
{

   Queue<string> s(6);
    s.enQueue("Richard");
    s.enQueue("Aaron");
    s.enQueue("Florence");
    s.enQueue("Jonathan");
    s.deQueue();
    s.display();

return 0;
}
