#include <iostream>
using namespace std;

void partition(int arr[], int l, int h, int p )
{
    int temp[h-l+1];
    int index=0;
    for(int i=l; i<=h ;i++)
    {
        if(arr[i] <= arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for(int i=l; i<=h ; i++)
    {
        if(arr[i] > arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for(int i=l; i<=h ; i++)
    {
        arr[i] = temp[i-l];
    }
}
int main(){
    int A[] = { 4, 3, 2, 5, 8, 6, 7 };
    int p ;
    int n = sizeof(A) / sizeof(A[0]);

    cout<<partition(A, 0,n, p) << endl;
    return 0;
}