#include<iostream>
using namespace std;
int main()
{
    int a[5]={10,11,12,13,14};
    int b[6]={45,46,47,48,49,50};
    int c[11];
     int i,j;
    for(i=0;i<5;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<6;i++)
    {
        c[i]=b[j];
        j++;
    }  

    for(i=0;i<i+j;i++)
    {
        cout<<c[i];
    }


    return 0;
}