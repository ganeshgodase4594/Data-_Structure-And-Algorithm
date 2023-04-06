/*
Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 0
Explanation: 0 is the largest element in the array. 

Example2: 
Input: arr[] = {8,10,5,7,9};
Output: 5
Explanation: 5 is the largest element in the array.
*/

#include<iostream>
using namespace std;
int main()
{
    int i;
   
    int a[]={8,10,5,7,9};

    int max =a[0],temp;

    for(int i=0;i<5;i++)
    {
        
        if(a[i] >=max)
        {
            temp =a[i];
            max= a[i];

        }
       
    }


    return 0;
}

