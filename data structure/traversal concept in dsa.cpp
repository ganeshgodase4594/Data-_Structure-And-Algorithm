#include<stdio.h>
int main()
{
	int a[5]={30,20,40,60,80};
	for(int i=0;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Traversal concept:");
	printf("\nPrint one by one element:");
	for(int i=0;i<=5;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
