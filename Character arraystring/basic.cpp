#include <iostream>
#include <cstring>
using namespace std;

int main(){
    
    char a[] = "abcdefghi" ; //{'a','b','h','\0'};
    cout<<a <<endl;

    char b[100];
    cin>>b;

    cout<<b<<endl;;

   // cout<<strlen(a)<<endl;//Number of visible characters
    //cout<<sizeof(a)<<endl;//+1

    return 0;
}