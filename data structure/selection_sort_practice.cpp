#include<iostream>
using namespace std;
int main()
{
	int i,j,n,temp,k;
	
	
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
	
	for(i=0;i<n-1;i++)
	{
		i=k;
		
		for(j=i+1;j<n;j++)
	     {
	     	if(a[j]<a[k])
	     	{
	     		k=j;
			 }
		 }
		 
		 if(k!=i)
		 {
		 	temp=a[k]];
		 	a[k]=a[i];
		 	a[i]=temp;
		 }
	}
	
	cout<<"\n";
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	
	


	
     

	return 0;
}
