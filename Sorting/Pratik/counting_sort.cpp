#include <iostream>
#include <vector>
using namespace std;

void counting_sort(int a[], int n)
{
    //Largest Element
    int largest = -1;

    for(int i=0; i<n ;i++)
    {
        largest = max(largest,a[i]);
    }

    //create a count array/vector
    vector<int> freq(largest+1, 0);

    //Update the freq array
    for(int i=0; i<n ;i++)
    {
        freq[a[i]]++;
    }


//Put back the elements from freq into original array

int j = 0;
for(int i=0; i<=largest; i++)
{
    while(freq[i]>0)
    {
        a[j] = i;
        freq[i] --;
        j++;
    }
}
return ;
}

int main(){
     int arr[] = {1,2,3,4,7,6,5,9};
    int n = sizeof(arr)/sizeof(int);
    counting_sort(arr,n);

    for(auto x: arr)
    {
        cout<< x <<", ";
    }
    return 0;
}