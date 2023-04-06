// Reverse An Array

#include<iostream>
using namespace std;
int main()
{
    int a[5]={23,34,45,56,67};
    
    int start=0;
    int end=4;
    int temp;

    for(int i=0;i<5;i++)
    {
        if(start<end)
        {
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
            start++;
            end--;
        }

       
    }

     for (int i=0;i<5;i++)
        {
            cout<<a[i]<<""<<endl;
        }
    return 0;
}


// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[5]={23,34,45,56,67};


//     for(int i=4;i>=0;i--)
//     {
//         cout<<a[i]<<""<<endl;
//     }

//     return 0;
// }