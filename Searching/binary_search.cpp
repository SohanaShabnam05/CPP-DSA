#include <iostream>
using namespace std;

int binary_search(int arr[], int key, int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main(){
    int arr[]={10,20,40,50,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;

    int index=binary_search(arr,key,n);

    if(index != -1)
    {
        cout<<key<<"is present in index "<<index<<endl;
    }
    else
    {
        cout<<key<<"Not found"<<endl;
    }
    
    return 0;
}