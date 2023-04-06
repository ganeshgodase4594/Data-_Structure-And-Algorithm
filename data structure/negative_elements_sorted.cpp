#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i;

    cout<<"\nEnter The Size Of Array:";
    cin>>n;

    int a[n];
   
    cout<<"\nEnter The No in Array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }



    cout<<"\n";
      
      int j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            swap(a[i],a[j]);
            j++;

        }

        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
        }
    }

    return 0;
}

    
    // int j=n-1;

    // for(int i=0;i<n;i++)
    // {
    //   if(a[i]<0)
    //   {
    //     swap(a[i],a[j]);
    //     i++;
    //     j--;
    //   }
    // }

    // for(int i=0;i<n;i++)
    //      {
    //        cout<<a[i]<<endl;
    //   }
    //  return 0;

    //   int j=0;
    // for(int i=0;i<n;i++)
    // {
    //     if(a[i]<0)
    //     {
    //         swap(a[i],a[j]);
    //         j++;

    //     }

    //     for(int i=0;i<n;i++)
    //     {
    //         cout<<a[i]<<endl;
    //     }
    // }

//     cout<<"\n";
//     int j=0;

//     for(int i=0;i<n;i++)
//     {
//       if(a[i]<0)
//       {
//         swap(a[i],a[j]);
        
//         j++;
//       }
//     }

//     for(int i=0;i<n;i++)
//          {
//            cout<<a[i]<<endl;
//       }

//       return 0;
// }