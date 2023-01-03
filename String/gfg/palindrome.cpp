#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

//NAIVE solution
// string isPal(string &str)
// {
//     string rev = str;
//     reverse(rev.begin(),rev.end());
//     if( str == rev )
//     {
//         return "Yes";
//     }
//     else
//     {
//         return "No";
//     }
// }

//efficient 
int isPal(string &str)
{
    int begin = 0;
    int end = str.length()-1;
    while(begin < end)
    {
        if(str[begin] != str[end])
        {
            return false;
        }
        begin++;
        end--;
    }
    return true;
}

int main(){
    string s = "ABCBA";
    cout<<isPal(s);
    return 0;
}