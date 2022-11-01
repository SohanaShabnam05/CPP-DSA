#include <iostream>
using namespace std;

int remDups(int arr[], int n)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i] != arr[res-1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}
int main(){
    int arr[] = {12,0,67,45,67,0,0};
    int n=sizeof(arr)/sizeof(int);

    n = remDups(arr,n);
    
    for(int i=0; i<n ; i++)
    {
        cout<<arr[i];
    }
    

    return 0;
}