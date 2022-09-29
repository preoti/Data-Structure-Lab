
#include<iostream>
using namespace std;

int main()
{
    int arr[8]={2,2,4,10,20,20,40};
    cout<<"The Array : ";
    for(int i=0;i<8;++i)
        cout<<arr[i]<<"  ";

    cout<<"\nThe Uncommon Elements are : ";
    for(int i=0;i<8;i++)
    {
        int b;
        for(b=0;b<i;b++)
        {
            if(arr[i]==arr[b])
            {
                break;
            }
        }
        if (i == b)
            cout<<arr[i]<<" ";
    }
    return 0;
}
