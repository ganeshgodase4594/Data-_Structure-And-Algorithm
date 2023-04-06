// #include<iostream>
// using namespace std;
// int main()

// {

//     int m,n;
//     cout<<"\nTaking Input From Array:";
//     cin>>m>>n;

//     int a[m][n];

//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//     {
//         cin>>a[i][j];
//     }
//     }

//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//     {
//         cout<<a[i][j]<<" ";
//     }
//     cout<<"\n";
//     }

//     return 0;
// }


// Find x element in array

#include<iostream>
using namespace std;
int main()

{
   
   int m,n;
    
    cout<<"\nTaking Input From Array:";
    cin>>m>>n;

    int a[m][n];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
    {
        cin>>a[i][j];
    }
    }

    int x;



    cout<<"\nFind No Of X:";
    cin>>x;
     int flag=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
    {
       if(a[i][j]==x)
       {
        cout<<"i"<<" "<<"j"<<"\n";
        flag=1;
       }
    }
    }
    if (flag)
    {
        cout<<"\nElement Is Found:";

    }
    else{
        cout<<"\nElement Is NoT Found:";
    }

    

    return 0;
}