#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int i,j,key,n,temp;
    
    printf("\nEnter Size Of Array!");
    scanf("%d",&n);
	int a[n];

    

    printf("\nEnter elements in array!");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=1;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {

         if(a[j]>a[j+1])
         {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
         }   
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }


    printf("\nEnter key elements!");
    scanf("%d",&key);
    
    int low =0;
   int high = n-1;

    while(low <= high)
    {
    	int mid = (low+high)/2;
    	
    	if(a[mid]==key)
    	{
    		cout<<"element is found"<<mid+1;
		}
		
		else if(key > a[mid])
		{
			low = mid + 1;
		}
		
		else if(key < a[mid])
		{
			high = mid - 1;
		}
        
    }
   
    

    
    return 0;                                                                                                                                                                                
}
