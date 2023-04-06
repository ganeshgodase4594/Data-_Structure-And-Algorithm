#include<iostream>
using namespace std;
int main()
{
    int a[5]={10,11,12,13,14};
    int b[6]={45,46,47,48,49,50};
    int c[11];
     int j;
    for(int i=0;i<5;i++)
    {
        c[i]=a[i];
    }

     int i=0;
    for(j=5;i<11;j++)
    {
        c[j]=b[i];
        i++;
    }  

    for(i=0;i<11;i++)
    {
        cout<<"\n"<<c[i];
    }


    return 0;
}