
#include<iostream>

using namespace std;
int main()
{
   int arr1[5], arr2[7], arr3[10], i, j, k=0, x, cmn;
   cout<<"Enter Elements for First Array: ";
   for(i=0; i<5; i++)
      cin>>arr1[i];
   cout<<"Enter Elements for Second Array: ";
   for(i=0; i<7; i++)
      cin>>arr2[i];


   for(i=0; i<5; i++)
   {
      for(j=0; j<8; j++)
      {
         if(arr1[i]==arr2[j])
         {
            cmn = 0;
            for(x=0; x<k; x++)
            {
               if(arr1[i]==arr3[x])
                  cmn++;
            }
            if(cmn==0)
            {
               arr3[k] = arr1[i];
               k++;
            }
         }
      }
   }


   cout<<"\nCommon Elements:\n";
   for(i=0; i<k; i++)
      cout<<arr3[i]<<" ";

   cout<<endl;
   return 0;
}
