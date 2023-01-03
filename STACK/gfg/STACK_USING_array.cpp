#include <iostream>
using namespace std;

struct MyStack
{
    int *arr;
    int cap;
    int top;
    MyStack(int c)
    {
        cap=c;
        arr=new int[cap];
        top=-1;
    }

    void push(int x)
    {
        if(top == cap-1)
        {
            cout<<"stackoverflow"<<endl;
        }
        top++;
        arr[top] = x;
    }

    int pop()
    {
        if(top <= -1)
        {
            cout<<"Stack Underflow"<<endl;
        }
        int res = arr[top];
        top--;
        return res;
    }

    int peek()
    {
        if(top == -1)
        {
            cout<<"doesn't exist"<<endl;
        }
        return arr[top];
    }

    int size()
    {
        return(top+1);
    }

    bool isEmpty()
    {
        return(top==-1);
    }

    int display()
    {
        if(top>=0)
        {
            cout<<"Stack elemets are:";
            for(int i=top; i>=0; i--)
            {
                cout<<arr[i]<<" ";
                cout<<endl;
            }
        }
        else
        {
            cout<<"Stack is underflow"<<endl;
        }

        return top;
    }
};

int main(){
    MyStack s(5);

    // cout<<s.pop()<<endl;
    // cout<<s.peek()<<endl;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);



    cout<<s.pop()<<endl;
    cout<<s.display()<<endl;
    cout<<s.size()<<endl;
    // cout<<s.peek()<<endl;
    // cout<<s.isEmpty()<<endl;

    return 0;
}