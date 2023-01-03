#include <iostream>
using namespace std;

int getIthBit(int n, int i)
{
    int mask = (1<<i);
    return (n&mask) > 0 ? 1 : 0;
}

int setIthBit(int &n, int i)
{
    int mask = (1<<i);
    n = (n|mask);
}

void clearIthBit(int &n, int i)
{
    int mask = ~(1<<i);
    n = n & mask;
}

void updateIthbit(int &n, int i, int v)
{
    clearIthBit(n,i);
    int mask = (v<<i);
    n = n|mask; // sets the right value
}

int clearLastBits(int &n, int i)
{
    int mask = (-1<<i);
    n = n&mask;
}

void clearBitsInRange(int &n, int i, int j)
{
    int a = (~0)<<(j+1);
    int b = (1<<i) - 1;
    int mask = a|b;
    n = n & mask;
}
int main(){
    int n = 13;
    int i;
    cin>>i;

    //cout<<getIthBit(n,i)<<endl;

    //setIthBit(n,i);
    //cout<<n;

    // clearIthBit(n,i);
    // cout<<n;

    // updateIthbit(n,i,0);
    // cout<<n<<endl;

    // clearLastBits(n,i);
    cout<<n<<endl;
    return 0;
}