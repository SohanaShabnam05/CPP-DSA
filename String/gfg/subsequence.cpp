#include <iostream>
#include <string.h>
using namespace std;

bool isSubSeq(string& S1, string& S2)
{
    int i=0 , j=0;
    int n = S1.length(), m = S2.length();
    while( i<n && j<m)
    {
        if(S1[i] == S2[i])
        {
            i++;
        }
        j++;
    }
            return (i==n);
    }
    
int main(){
    string str1 = "z";
    string str2 = "geeksforgeeks";

    if(isSubSeq(str1,str2))
    {
        cout<<"Yes";
    }
    else 
    {
        cout<<"No";
    }

    return 0;
}