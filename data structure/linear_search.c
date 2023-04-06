#include<stdio.h>
int main()
{
    int i=0, flag=0, key;
    int a[5]={40,56,78,21,67};
    key=21;
    for(int i=0;i<5;i++)
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

    