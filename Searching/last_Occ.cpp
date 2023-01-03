#include <iostream>
using namespace std;

int lastOcc(int arr[], int n, int key)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid = (high+low)/2;
        if(arr[mid]<key)
        {
            low = mid + 1;
        }
        else if(arr[mid]> key)
        {
            high = mid - 1;
        }
        else 
        {
            if(mid != n-1 || arr[mid] != arr[mid+1])
            {
                return mid;
            }
            else{
                low = mid + 1;
            }
        }
    }
    return -1;
}
int main(){
    int arr[] ={1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 2;
    cout<<lastOcc(arr,n,key);
    
    return 0;
}