#include <iostream>
using namespace std;

int queue[5], n=5, front=-1, rear=-1;

void Enque()
{
    int data;
    if(rear == n-1)
        cout<<"Queue overflow"<<endl;
    else
    {
        if(front == -1)
        {
             front = 0;
        }
       
        cout<<"Insert element in queue : "<<endl;
        cin>>data;
        rear++;
        queue[rear] = data; 
          
    }
}

void Deque()
{
    if(front = -1 || front > rear)
    {
        cout<<"Queue Underflow";
    }
    else
    {
        cout<<"Element deleted from queue is : "<<queue[front]<<endl;
        front++;

    }
}

void display()
{
    if(front == -1)
    {
        cout<<"Queue is Empty "<<endl;
    }
    else{
        cout<<"Queue elements are : ";
        for(int i=front ; i<=rear ; i++)
        {
            cout<<queue[i]<<" ";
            cout<<endl;
        }
    }
}

int main(){
    
    int ch; 
    cout<<"1 : Enque "<<endl;
    cout<<"2 : Deque "<<endl;
    cout<<"3 : Display "<<endl;
    cout<<"4 : Exit "<<endl;

    do {
        cout<<"Enter your choice : "<<endl;
        cin>>ch;
        switch(ch) {
            case 1 : Enque();
            break;

            case 2 : Deque();
            break;

            case 3 : display();
            break;

            case 4 : cout<<"Exit"<<endl;
            break;

            default : cout<<"Invalid choice"<<endl;
        }
    }while(ch != 4);
        return 0;
}