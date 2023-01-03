#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

void merge(int a[], int low, int mid , int high)
{
   int n1 = mid - low + 1;
   int n2 = high - mid;

    int left[n1];
    int right[n2];

    for(int i=0; i<n1; i++)
    {
        left[i] = a[low+i];
    }
    for(int i=0; i<n2; i++)
    {
        right[i] = a[mid+i+1];
    }

    int i=0, j=0, k=low;
    while(i<n1 && j<n2)
    {
        if(left[i] <= right[j])
        {
            a[k] = left[i];
            i++;
            j++;
        }
        else
        {
            a[k] = right[j];
            i++;
           j++;
        }
        //k++;
    }
    while(i<n1)
    {
        a[k] = left[i];
        i++;
        k++;
    }
    while(i<n2)
    {
        a[k] = right[i];
        j++;
        k++;
    }

}

void mergeSort(int arr[], int l, int r)
{
    if(r>l)
    {
    int m = l+(r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
    }
    
}



int main(){
    int arr[] = {12,11,13,5,6,7};
    auto n = sizeof(arr)/sizeof(arr[0]);

    for(auto x : arr)
    {
        cout<<x<<" ";
    }

    mergeSort(arr,0,n-1);

    cout<<endl;

     for(auto x : arr)
    {
        cout<<x<<" ";
    }
    
    return 0;
}