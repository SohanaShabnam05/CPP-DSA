#include <iostream>
#define R 4
#define C 4
using namespace std;

void printsnake(int mat[R][C])
{
    for(int i=0; i<R ; i++)
    {
        if(i%2 == 0)
        {
            for(int j=0; j<C; j++)
            {
                cout<<mat[i][j]<<" ";
            }
        }
        else
        {
            for(int j=C-1; j>=0; j--)
            {
                cout<<mat[i][j]<<" ";
            }
        }
    }
}

int main(){
    int mat[R][C] = {{10,20,30,40},{15,25,35,45},{27,37,47,57},{32,42,52,62}};
    printsnake(mat);
    return 0;
}