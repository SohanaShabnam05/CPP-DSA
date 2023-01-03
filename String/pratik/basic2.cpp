#include <iostream>
#include <cstring>
using namespace std;

int main(){
    
    char a[1000] = "apple";
    char b[1000];

    //Calc length
    cout<< strlen(a)<<endl;

    //Strcpy
    //strcpy(b,a);
    //cout<<b<<endl;

    //Compare
    //cout<< strcmp(a,b) <<endl;

    char web[] ="www.";
    char domain[] = "sshabnam.com";

    strcpy(b,strcat(web,domain));
    cout<<b;

    cout<< strcmp(b,a) <<endl;
    return 0;
}