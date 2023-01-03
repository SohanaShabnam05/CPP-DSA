#include <iostream>
using namespace std;

//NAIVE METHOD
// void intersection(int a[], int b[], int m, int n)
// {
//     for(int i=0; i<m; i++)
//     {
//         if(i>0 && a[i]==a[i-1])
//         {
//             continue;
//         }
//         for(int j=0; j<n; j++)
//         {
//             if(a[i] == b[j])
//             {
//                 cout<<a[i]<<" ";
//                 break;
//             }
//         }
//     }
// }


//Efficient Solution
void intersection ( int a[], int b[], int m ,int n)
{
    int i=0, j=0;
    while(i<m && j<n)
    {
        if(i>0 && a[i]==a[i-1])
        {
            i++;
            continue;
        }
        if(a[i]<b[j])
        {
            i++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else
        {
            cout<<a[i]<<" ";
            i++;
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
    intersection(arr1, arr2, m, n);
 

    return 0;
}