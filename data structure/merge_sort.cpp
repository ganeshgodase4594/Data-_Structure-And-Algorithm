#include<iostream>
using namespace std;
int main()
{
	int m,n;
	int i=0;
	int j=0;
	int k=0;
	
	cout<<"\nEnter The Size Of Sorted Array a is";
	cin>>m;
	
	cout<<"\nEnter The Size Of Sorted Array b is";
	
	cin>>n;
	
	int a[m];
	int b[n];
	int c[m+n];
	cout<<"\nEnter What elements do You Want To Enter";
	
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	
	cout<<"\n";
	
	for(int j=0;j<n;j++)
	{
		cin>>b[j];
	}
	
	while(i<m && j<n)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			
			i++;
			k++;
		}
		
		else
		{
			c[k]=b[j];
			
			
			j++;
			k++;
		}
	}
	
	while(i<m)
	{
		c[k]=a[i];
		i++;
		k++;
	}
	
	while(j<n)
	{
		c[k]=b[j];
		
		j++;
		k++;
	}
	
	cout<<"\n";
	
	for(int k=0;k<m+n;k++)
	{
		cout<<c[k]<<endl;
	}
	
	cout<<"\n";
	
	
	return 0;
}
