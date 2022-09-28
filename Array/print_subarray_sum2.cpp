#include <iostream>
using namespace std;

void printSubarrays(int arr[], int n)
{
    for(int i=0; i<n ;i++){
        int h=0;
        for(int j=i; j<n; j++){

            int sum=0;
            
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<",";   
                sum = sum + arr[k];
            }

            cout<<" the sum is = "<<sum;
            cout<<endl;

        }
             
        cout<<endl;
        cout<<" the largest sum is"<<h<<endl;
        cout<<endl;
    }
    cout<<endl;
}

// Find out the largest sum of subarray
// Brut Force

int main(){
    
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);
    
    printSubarrays(arr,n);

    return 0;
}