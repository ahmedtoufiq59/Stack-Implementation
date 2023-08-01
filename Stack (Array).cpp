// Stack array implementation:: 
/*
#include<iostream>
#define max 3
using namespace std;
int stack_arr[max];
int top=-1;
int isEmpty()
{
    if(top==-1)
    {
        return 1;
    }
    else
        return 0;
}
int isFull()
{
    if(top==max-1)
    {
        return 1;
    }
    else
        return 0;
}
void push(int data)
{
    if(isFull())
    {
        cout<<"Stack overflow. Please don't push and the extra value(s) is: " << data;
        return;
    }
        top++;
        stack_arr[top]=data;
}
int pop()
{
    int value;
    if(isEmpty())
    {
        cout<<("Stack Underflow. There is nothing to pop");
    }
        value=stack_arr[top];
        top--;
        return value;
}
int peek()
{
    if(isEmpty())
    {
        cout<< ("There is nothing to peek. Stack is empty");
        //exit(1);
    }
    return stack_arr[top];
}

void display()
{
    if(isEmpty())
    {
        cout<< ("No variable available.");
        return;
    }
    else
    {
        cout<< "\nHere is Stack: ";
        for(int i=0;i<=top;i++)
        {
            cout<< (stack_arr[i]) << "  ";
        }
    }
    cout<< endl;
}
int main()
{
    int data;
    push(11);
    push(21);
    push(35);
    pop();
    pop();
    push(63);
    push(85);
    push(21);
    data=peek();
    cout<<"\nHere is the top value: " << data;
    display();
    return 0;
}*/


