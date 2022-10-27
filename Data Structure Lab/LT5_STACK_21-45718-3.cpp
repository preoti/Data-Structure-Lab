#include <iostream>

using namespace std;

int stk[9],top =-1,maxsize=8;
bool isEmpty()
{
    if (top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull()
{

    if(top==maxsize)
    {

        return true;
    }
    else{
        return false;
    }
}
bool push(int element)
{
    if(isFull())
    {
        cout<<"Stack is full"<<endl;
        return false;
    }
    else{
        top++;
        stk[top]=element;
        return true;
    }
}

bool pop()
{
    if(isEmpty())
    {
        cout<<"stack is empty"<<endl;
        return false;
    }
    else{
        top--;
        return true;
    }
}
int topelement()
{
    if(isEmpty())
    {
        cout<<"stack is empty"<<endl;

    }
    else{
        cout<<"the top element is: "<<stk[top]<<endl;
    }
}

void show()
{

    if (isEmpty())
    {
        cout<<"stack is empty"<<endl;
        return;
    }
    else
        {
            for(int i=top;i>=0;i--)
        {
        cout<<stk[i]<<endl;
        }
    }
}

int main()
{

    cout<<"after pushing the new stack is: "<<endl;
    push(6);
    push(3);
    push(4);
    push(9);
    push(11);
    push(13);
    push(2);
    push(7);
    show();
    cout<<endl;
    topelement();

        cout<<"after popping the new stack is: "<<endl;
        pop();
        show();
        topelement();
}
