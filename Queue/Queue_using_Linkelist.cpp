#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

node *front = NULL;
node *rear = NULL;

bool isempty()
{
    if(front == NULL && rear == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Enque( int value )
{
    node *ptr = new node();
    ptr->data = value;
    ptr->next = NULL;

    if( front == NULL)
    {
        front = ptr;
        rear = ptr;
    }
    else
    {
        rear->next = ptr;
        rear = ptr;
    }
}

void Deque()
{
    if( isempty() )
    {
        cout<<"Queue is empty\n";
    }
    else
    {
        if(front == rear)
        {
            free(front);
            front = rear = NULL;
        }
        else
        {
            node *ptr = front;
            front = front->next;
            free(ptr);
        }
    }
}

void peek()
{
    if(isempty())
    {
        cout<<"Queue is empty\n";
    }
    else
    {
       cout<<"Element at front is : "<<front->data; 
    }
}

void displayQueue()
{
    if(isempty())
    {
        cout<<"Queue is empty\n";
    }
    else
    {
        node *ptr = front;
        while(ptr != NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }
}

int main(){
    int choice, flag=1, value;
    while( flag == 1)
    {
        cout<<"\n1.Enque \n2.Deque \n3.peek \n4.Display Queue \n5.exit\n";
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"Enter value: \n";
                    cin>>value;
                    Enque(value);
                    break;
            case 2: Deque();
                    break;
            case 3: peek();
                    break;
            case 4: displayQueue();
                    break;
            case 5: flag = 0;
                    break;
        }
    }
    return 0;
}