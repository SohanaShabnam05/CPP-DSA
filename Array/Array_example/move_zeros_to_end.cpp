#include <iostream>
using namespace std;

int move_zeros_to_end(int arr[], int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] != 0)
        {
        swap(arr[i], arr[count]);
        count++;
        }
       
    }
}

int main(){
    int arr[]={1,2,8,0,0,0,20,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    move_zeros_to_end(arr,n);

    for(int i =0;i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}