#include <iostream>
#include<string.h>
using namespace std;

int main(){
    char s1[] = "zsz";
    char s2[] = "bcb";
    int res = strcmp(s1,s2);
    if(res>0)
    {
        cout<<"Greater";
    }
    else if(res==0)
    {
        cout<<"equal";
    }
    else
    {
        cout<<"small";
    }
    return 0;
}