#include <iostream>
using namespace std;

int maxProfit(int price[], int n)
{
    int profit = 0;
    for(int i=1; i<n; i++)
    {
        if(price[i]>price[i-1])
        {
            profit += (price[i]-price[i-1]);
        }
    }
    return profit;
}
int main(){
    int arr[] = {1,5,3,8,16};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxProfit(arr,n);
    
    return 0;
}