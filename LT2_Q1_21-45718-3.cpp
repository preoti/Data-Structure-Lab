#include<iostream>
using namespace std;
int main()
{
    int arr1[10], arr2[15], arr3[30];
    int size1, size2, size3, i, j, total;
    cout<<"Enter the Size for First Array: ";
    cin>>size1;
    cout<<"Enter the Size for Second Array: ";
    cin>>size2;
    cout<<"\nEnter "<<size1<<" Elements for First Array: ";
    for(i=0; i<size1; i++)
        cin>>arr1[i];
    cout<<"\nEnter "<<size2<<" Elements for Second Array: ";
    for(i=0; i<size2; i++)
        cin>>arr2[i];

    for(i=0; i<size1; i++)
    {
        arr3[i] = arr1[i];
    }
    for(j=0; j<size2; j++)
    {
        arr3[i] = arr2[j];
        i++;
    }
    size3 = i;

    for(j=0; j<(size3-1); j++)
    {
        for(i=0; i<(size3-1); i++)
        {
            if(arr3[i]<arr3[i+1])
            {
                total = arr3[i];
                arr3[i] = arr3[i+1];
                arr3[i+1] = total;
            }
        }
    }
    cout<<"\nMerged Array in reverse form:\n";
    for(i=0; i<size3; i++)
    {
        if(i==(size3-1))
            cout<<arr3[i];
        else
            cout<<arr3[i]<<" ";
    }
    cout<<endl;
    return 0;
}
