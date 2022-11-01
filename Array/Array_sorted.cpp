#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                return false;
            }
            return true;
        }
    }
}

int main(){
    int arr[]={10,2,14,16};
    int ans = isSorted(arr, sizeof(arr)/sizeof(arr[0]));
    if(ans== false)
    {
        cout<<"false";
    }
    else if(ans == true){
        cout<<"true";
    }

    return 0;
}