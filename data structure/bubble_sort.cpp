#include<iostream>
using namespace std;
int main(){
	int n,j,i,temp;
  cout<<"\nEnter how many number you want to enter: ";
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++){
    cout<<"\nenter the number: ";
		cin>>a[i];

  }
	

    for(int i=1;i<n;i++)
    {
	for(int j=0;j<n-1;j++)
    {
    if(a[j]>a[j+1])
    {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1] =temp;
     
    }
    }
    }
    for(int i=0;i<n;i++){
		cout<<a[i]<<"\n";
	}  
	return 0;
}

