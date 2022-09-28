#include <iostream>
using namespace std;

//problem: Print all subarrays of  given array
//Brut force Approach O(N^3);
int largestSubArraySum1(int arr[], int n)
{
    int largest_sum=0;

    for(int i=0; i<n ;i++){
        for(int j=i; j<n; j++){

            int subarraySum = 0;

            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<",";
                subarraySum +=arr[k];
            }
            cout<<"the sum is "<<subarraySum;

            //put a check is subarraySum > largest_sum
            largest_sum = max(largest_sum,subarraySum);
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<endl;
    return largest_sum;
}

//Prefix Sum Approach O(N^2)

int largestSubArraySum2(int arr[], int n)
{
    //Prefix Sums
    int prefix[100] = {0};
    prefix[0] = arr[0];

    for(int i=1; i<n; i++)
    {
        prefix[i] = prefix[i-1] + arr[i];
    }

    //largest sum login
    int largest_sum=0;

    for(int i=0; i<n ;i++){
        for(int j=i; j<n; j++){

           int subarraySum = i>0 ? prefix[j] - prefix[i-1] : prefix[j];
           //put a check is subarraySum > largest_sum
           largest_sum = max(largest_sum,subarraySum);
        }
    
    }
    
    return largest_sum;
}

int main(){

    int arr[] = {10,20,30,40,-50,-60};
    int n = sizeof(arr)/sizeof(int);
    
    cout<<largestSubArraySum1(arr,n);
    cout<<endl;
    cout<<largestSubArraySum2(arr,n);

    return 0;
}