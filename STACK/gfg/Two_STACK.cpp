#include <iostream>
#include <stdlib.h>
using namespace std;

class twoStacks {
    int *arr;
    int size;
    int top1, top2;

    public:
      twoStacks(int n) //constructor
      {
        size = n;
        arr = new int[n];
        top1=-1;
        top2 = size;
      }  

      //Method to push an element x to stack1
      void push1(int x)
      {
        //there is atleast one empty space for new element
        if(top1< top2-1)
        {
            top1++;
            arr[top1] = x;
        }
        else
        {
            cout<<"Stack Overflow";
            exit(1);
        }
      }

      void push2(int x)
      {
        if(top1 < top2-1)
        {
            top2 --;
            arr[top2] = x;
        }
        else
        {
            cout<<"Stack overflow";
            exit(1);
        }
      }

      //Method to pop an element from first stack
      int pop1()
      {
        if(top1>=0)
        {
            int x = arr[top1];
            top1--;
            return x;
        }
        else{
            cout<<"Stack Underflow";
            exit(1);
        }
      }

      int pop2()
      {
        if(top2<size)
        {
            int x = arr[top2];
            top2++;
            return x;
        }
        else
        {
            cout<<"Stack underflow";
            exit(1);
        }
      }

      int size1()
      {
        return (top1+1);
      }

       int size2()
      {
        return (size-top2);
      }
};

int main()
{
    twoStacks ts(5);
    ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push2(7);

    cout<<"Popped element from stack1 is "<<ts.pop1();
    ts.push2(40);
    cout<<"Popped element from stack1 is "<<ts.pop2();

    return 0;
}