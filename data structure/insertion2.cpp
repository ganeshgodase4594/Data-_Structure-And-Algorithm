#include<stdio.h>
int main()
{
    int i,j,k,temp,n;
    int a[n];

    printf("Enter size Of Array:");
    scanf("%d",&n);

    printf("\nEnter Elements In Array:");

    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=1;i<n;i++)
    {
        temp=a[i];

        for(j=i-1;j>=0 && a[j]>temp; j--)
        {
            a[j+1]=a[j];

        }
        a[j+1]=temp;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }


    return 0;
}

