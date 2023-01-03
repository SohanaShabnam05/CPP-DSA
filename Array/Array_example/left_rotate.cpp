#include <iostream>
using namespace std;

void left_rotate(int arr[], int n , int d)
{
    d=d%n;
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
}

void reverse(int arr[], int high, int low)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

int main(){

    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d=1;
    left_rotate(arr,n,d);
    for(int i=0; i<n ;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}