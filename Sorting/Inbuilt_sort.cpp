#include <iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[] = {10,9,8,6,5,4,3,2,11,16,8};
    int n = sizeof(arr)/sizeof(n);

    sort(arr, arr+n);
    reverse(arr, arr+n);

    //Print the output
    for(int x : arr)
    {
        cout<< x <<" ";
    }
    
    return 0;
}