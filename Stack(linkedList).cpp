//Stack linked list implementation ::
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
} *top=NULL;
void push(int data)
{
    struct node* latest;
    latest=(struct node*)malloc(sizeof(struct node));
    if(latest==NULL)
    {
        cout<<"Stack overflow\n";
    }
    else
    {
        latest->data=data;
        latest->next=top;
        top=latest;
    }
}
int pop()
{
    struct node* temp;
    //temp=(struct node*)malloc(sizeof(struct node));
    if(top==NULL)
    {
        cout<< "Stack Underflow\n";
    }
    else
    {
        int data=top->data;
        temp=top;
        top=top->next;
        free(temp);
        return data;
    }
}
void print()
{
    struct node* temp;
    //temp=(struct node*)malloc(sizeof(struct node));
    temp=top;
    cout<< "\nHere is the updated stack : ";
    while(temp)
    {
        cout<< temp->data << "  ";
        temp=temp->next;
    }
}
int peek()
{
    if(top==NULL)
    {
        cout<<"Here is nothing to peek";
    }
    return top->data;
}
int main()
{
    push(15);
    push(11);
    push(73);
    pop();
    push(85);
    pop();
    push(22);
    pop();
    int data=peek();
    cout<< "Here is the last value of that stack: " << data;
    print();
}