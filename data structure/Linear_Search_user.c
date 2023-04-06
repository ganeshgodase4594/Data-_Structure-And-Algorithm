#include<stdio.h>
int main()
{
    int i=0,key,flag=0,n;
   

    printf("\nEnter How Many Elements You Want :");
    scanf("%d",&n);

 int a[n];
    printf("\nEnter The Elements:");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter The Searchable Key Elements!!!");
    scanf("%d",&key);

    for(int i=0;i<n;i++)
    {

    

    if(a[i]==key)
    {
        flag=1;
        break;
    }

    }
    if(flag==1)
    {
        printf("Element Is Found!!!");

    }
    else
    {
        printf("Element Is Not Found!!!");
    }

    return 0;



    
}