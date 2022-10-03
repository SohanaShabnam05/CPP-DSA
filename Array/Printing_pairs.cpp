#include <iostream>
using namespace std;

void PrintAllPairs(int arr[], int n)
{
    //print all the elements
    for(int i=0; i<n; i++)
    {
        int x = arr[i];

        for(int j=i+1; j<n ; j++)
        {
            int y= arr[j];
             cout<< x <<" , " << y<<endl;
        }
       cout<<endl;
    }
}

int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(n);

    PrintAllPairs(arr,n);
    
    return 0;
}