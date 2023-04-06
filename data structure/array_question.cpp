/*
find the smallest number in array
*/

#include<iostream>
using namespace std;
int main()
{
    int i,min;

    int arr[]={12,34,54,89,11};

     min=arr[0];
     int temp;

    for(int i=0;i<5;i++)
    {
        if(arr[i]<=min)
        {
           temp=arr[i];
           min=arr[i];
        }
    }
    return 0;
}