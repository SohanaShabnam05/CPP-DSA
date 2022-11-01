#include <iostream>
using namespace std;

int countDigits(int x)
{
    int run=0;
    while(x>0)
    {
        x=x/10;
        run++;
    }
    return run;
}


int main(){
    int n;
    cin>>n;
    cout<<countDigits(n);
    return 0;
}