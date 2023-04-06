//#include<iostream>
//using namespace std;
//int main()
//{
//	int i,j,n,temp;
//	
//	
//	cout<<"\nEnter Size Of Array:";
//	cin>>n;
//	int a[n];
//	cout<<"\n";
//	
//	cout<<"\nEnter Do You Elements Want To Enter:";
//	
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
//	
//	cout<<"\n";
//	
//	for(int i=1;i<n;i++)
//	{
//		for(j=0;j<n-1;j++)
//		{
//			if(a[j]>a[j+1])
//			{
//				temp=a[j];
//				a[j]=a[j+1];
//				a[j+1]=temp;
//			}
//		}
//	}
//	cout<<"\n";
//		for(int i=0;i<n;i++)
//	{
//		cout<<a[i]<<endl;
//	}
//	return 0;
//}



#include<iostream>
using namespace std;
int main()
{
	int i,j,n,temp;
	
	
	cout<<"\nEnter Size Of Array:";
	cin>>n;
	int a[n];
	cout<<"\n";
	
	cout<<"\nEnter Do You Elements Want To Enter:";
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"\n";
	
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
	cout<<"\n";
		for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	
	cout<<"\nEnter Minimum Element In Array="<<a[0];
	cout<<"\nEnter Maximum Element Array="<<a[n-1];
	cout<<"\nEnter Second Minimun Element In Array="<<a[0+1];
	cout<<"\nEnter Second Maximum Element In Array="<<a[n-2];
	return 0;
}
