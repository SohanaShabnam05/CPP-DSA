#include <iostream>
#include <algorithm>
using namespace std;

struct Point{
    int x,y;
};

bool myCmp(Point P1, Point P2)
{
    return (P1.x<P2.x);
}

int main(){
    
    Point arr[] = {{3,10},{2,8},{5,4}};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr , arr+n, myCmp);
    for(auto i : arr)
    {
        cout<<i.x<<" "<<i.y<<endl;
    }

    return 0;
}