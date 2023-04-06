
// Only For Sorted Array

#include<iostream>
using namespace std;
int main()
{
	int n;
	int i=0;
	int j=n-1;
	int mid=(i+j)/2;
	int key;
	
	
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
	
	cout<<"\nEnter The Key Element";
	cin>>key;
	
	while(key!=a[mid] && i<=j)
	{
		if(key<a[mid])
		{
			j=mid-1;
		}
		
		else
		{
			i=mid+1;
		}
		
		mid=(i+j)/2;
	}
	if(key == a[mid])
	{
		cout<<"\nElement Is Found!!!!!";
		
	}
	else
	{
		cout<<"\nElement Is Not Found!!!!";
	}
	
	return 0;
}
	
