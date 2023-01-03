#include <iostream>
#include<algorithm>
#include<math.h>
using namespace std;

//Naive Method
// int kth_element(int arr[], int n, int k)
// {
//     sort(arr,arr+n);
//     return arr[k-1];
// }

//Optimized
 int partition (int arr[], int low, int high)
{
       // Your code here
       int pivot = arr[low];
       int i=low-1,j=high+1;
       while(true)
       {
           do{
               i++;
           }while(arr[i]<pivot);
           
           do{
               j--;
           }while(arr[j]>pivot);
           
           if(i>=j)
           {
               return j;
           }
           swap(arr[i],arr[j]);
       }
}

int kth_element(int arr[], int n, int k)
{
    int low=0, high=n-1;
    while(low<=high)
    {
        int p = partition(arr,low,high);
        if(p==k-1)
        {
            return p;
        }
        else if(p>k-1)
        {
            high = p-1;
        }
        else
        {
            low=p+1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {12,14,15,16,18,20,22,24,26};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    cout<<kth_element(arr,n,k);
    return 0;
}