#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

struct MyStack
{
    vector<int> v;
    void push(int x)
    {
        v.push_back(x);
    }

    int pop()
    {
        int res = v.back();
        v.pop_back();
        return res;
    }

    int size()
    {
        return v.size();
    }

    bool isEmpty()
    {
        return v.empty();
    }

    int peek()
    {
        return v.back();
    }
};

int main(){

    MyStack s(5);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);



    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    return 0;
}