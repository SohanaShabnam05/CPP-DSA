#include <iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
    for(int times=1 ; times<=n-1; times++)
    {
        //Reapted swapping
        for(int j=0; j<=n-times-1; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {1,2,3,4,7,6,5,9};
    int n = sizeof(arr)/sizeof(int);
    bubble_sort(arr,n);

    for(auto x: arr)
    {
        cout<< x <<", ";
    }
    return 0;
}