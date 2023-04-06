int main()
{
//	int x;
//	printf("How many numbers you want to insert: ");
//	scanf("%d",&x);
//	

	int a[5]={12,13,14,150,10};
	
	int i,x,y;
	
//	for(i=0;i<5;i++)
//	{
//		if(i==2)
//		{
//			printf("enter the number: ");
//			a[3]=a[2];
//			scanf("%d",&x);
//			a[2]=x;
//		}
//	
//	
//	}
	
//	code for delete

		printf("Enter the Number which number you want to delete:");
		scanf("%d",&a[i]);
		for(i=x;i<5;i++)
		{
			a[i]=a[i+1];
		}
	
//	printf("hello");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
}
