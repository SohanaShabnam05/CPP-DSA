#include <iostream>
using namespace std;

int bubble_sort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int swapped = false;
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
            {
                break;
            }
    }
    
}

int main(){
    int arr[] = {2,5,4,3,7,6,1,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);

    for(auto x: arr)
    {
        cout<<x <<" ";
    }
    return 0;
}