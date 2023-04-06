#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i,k;

    cout<<"\nEnter The Size Of Array:";
    cin>>n>>k;

    int a[n];
   
    cout<<"\nEnter The No in Array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\n";
    sort(a,a+n);

    for(int i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
        }
    
    cout<<"\n";

    cout<<a[k-1]<<" "<<a[n-k];

    

    return 0;
}