#include <iostream>
using namespace std;

int main(){
    
    int marks[100];
    int n;
    cout<<"Enter marks of studnnts";
    cin>>n;

    //Assign a value
    marks[0] = -1;

    //Input
    for(int i=1; i<=n ; i++)
    {
        cin>>marks[i];

        //Update
        marks[i] = marks[i]*2;
    }


    //Output
    for(int i=0; i<=n; i++)
    {
        cout<<marks[i]<<endl;
    }

    cout<<endl;
    return 0;
}