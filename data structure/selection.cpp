
#include <iostream>
using namespace std;
int main()
{
   // cout<<"\nHello";
   int i, j, k, temp;

   cout << "\nEnter Size Of Array:";
   cin >> n;
   int a[n];

   // int a[2];
   for (int i = 0; i < 2; i++)
   {
      cout << "\nEnter Elements In Array:";
      cin >> a[i];
   }

   int a[3]={12,13,14};


   for (int i = 0; i < 3; i++)
   {
      i = k;

      for (j = i + 1; j < 3; j++)
      {
         if (a[j] > a[k])
         {
            k = j;
         }
      }
      if (k != i)
      {
         temp = a[k];
         a[k] = a[i];
         a[i] = temp;
      }
      for (int i = 0; i < 3; i++)
      {
         cout << "\nEnter Elements In Array:";
         cin >> a[i];
      }
   }

   return 0;
}
