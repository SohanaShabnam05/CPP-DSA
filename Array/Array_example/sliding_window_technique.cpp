#include <iostream>
using namespace std;

int maxKsum(int arr[], int n, int k)
{
    int curr=0;
    for(int i = 0; i<k ;i++)
    {
        curr+=arr[i];
    }
    int res = curr;
    for(int i=k ; i<n; i++)
    {
        curr=curr+arr[i]-arr[i-k];
        res=max(res,curr);
    }
    return res;
}

int main(){
     int arr[] = {1,8,30,-5,20,7};
     int k=4;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxKsum(arr,n,k);
    return 0;
}