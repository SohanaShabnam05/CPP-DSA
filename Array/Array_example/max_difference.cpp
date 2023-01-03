#include <iostream>
using namespace std;

int max_diff(int arr[], int n)
{
    int res = arr[1]-arr[0];
    int minvalue = arr[0];
    for(int i=0; i<n; i++)
    {
        res=max(res,arr[i]-minvalue);
        minvalue=min(arr[0], minvalue);
    }
    return res;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<max_diff(arr,n);
    
    return 0;
}