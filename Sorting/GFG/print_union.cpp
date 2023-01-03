#include <iostream>
#include <algorithm>
using namespace std;

// void printUnion (int a[], int b[], int m, int n)
// {
//     int c[m+n];
//     for(int i=0; i<m ;i++)
//     {
//         c[i] = a[i];
//     }

//     for(int i=0; i<n; i++)
//     {
//         c[m+i] = b[i];
//     }
//     sort(c,c+m+n);
    
//     for(int i=0; i<m+n; i++)
//     {
//         if(i==0 || c[i]!=c[i-1])
//         cout<<c[i]<<" ";
//     }
// }

void printUnion (int a[], int b[], int m, int n)
{
    int i=0 , j=0;
    while(i<m && j<n)
    {
        if(i>0 && a[i]==a[i-1])
        {
            i++;
            continue;
        }
        if(j>0 && a[j]==a[j-1])
        {
            i++;
            continue;
        }     
    }
    while(i<m)
    {
        if(i>0 && a[i]!=a[i-1])
        {
            cout<<a[i]<<" ";
            i++;
        }
        while(j<n)
        {
            cout<<b[j]<<" ";
            j++;
        }
    }
}

int main(){
      
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
 
    // Function calling
    printUnion(arr1, arr2, m, n);
    
 
    return 0;
}