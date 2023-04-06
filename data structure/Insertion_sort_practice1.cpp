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
	
	for(i=0;i<n;i++)
	{
		temp=a[i];
		
		for(j=i-1;j>=0  &&  a[j]>temp;j--)
		
		{
		   a[j+1]=a[j];
		}
		a[j+1]=temp;
	}
	cout<<"\n";
		for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	
	return 0;
}
