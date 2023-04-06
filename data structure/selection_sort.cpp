#include<iostream>
using namespace std;
int main()
{
   int i,j,k,n;
    
   cout<<"\nEnter how many element you want to insert: ";
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
   {
    cout<<"\nEnter the number : ";
    cin>>a[i];
   }
//    int a[n] = {12,9,56,43};

   for(i=0;i<n;i++)
   {
    k=i;
    for(j=i+1;j<n;j++)
    {
        if(a[j]<a[k])
        {
            k = j;
        }

    }
    int temp = a[i];
    a[i] = a[k];
    a[k]  = temp;
   }


   for(i=0;i<n;i++)
   {
    cout<<"\n"<<a[i];
   }

    return 0;

}

