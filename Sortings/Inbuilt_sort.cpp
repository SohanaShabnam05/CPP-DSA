#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    cout<<"Comparing "<<a <<" and "<<b <<endl;
    return a > b;
}

int main(){
    
    int arr[] = {10,9,8,6,5,4,3,2,11,16,8};
    int n = sizeof(arr)/sizeof(int);

   // sort(arr, arr+n , compare);  // here compare not a func call => passing a function as a parameter to another function

    sort(arr, arr+n, greater<int>());

    //reverse(arr, arr+n);

    //Print the output
    for(int x : arr)
    {
        cout<< x <<" ";
    }

    return 0;
}