#include<stdio.h>

int main()
{
    int i,j,key,mid,n,temp;
    int a[n];

    printf("\nEnter Size Of Array!");
    scanf("%d",&n);

    printf("\n******************************");

    printf("\nEnter elements in array!");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    // for(int i=1;i<n;i++)
    // {
    //     for(j=0;j<n-1;j++)
    //     {

    //      if(a[j]>a[j+1])
    //      {
    //         temp=a[j];
    //         a[j]=a[j+1];
    //         a[j+1]=temp;
    //      }   
    //     }
    // }

    // for(int i=0;i<n;i++)
    // {
    //     printf("\n%d",a[i]);
    // }


    // printf("\nEnter key elements!");
    // scanf("%d",&key);

    // while(a[mid]!=key && i<=j)
    // {
    //     if(a[mid]<key)
    //     {
    //         j=mid-1;
    //     }
    //     else
    //     {
    //         i=mid+1;
    //     }
    // }
    // if(i<=j)
    // {
    //     printf("\nElement Is Found!!");
    // }
    // else
    // {
    //     printf("\nElement Is Not Found!!");
        
    // }
    

    
    return 0;                                                                                                                                                                                
}