#include<iostream>
using namespace std;
int main()
{
    int n, i,j, arr[50], total;
    cout<<"Enter the Size: ";
    cin>>n;
    cout<<"Enter "<<n<<" Numbers: ";
    for(i=0; i<n; i++)
        cin>>arr[i];

    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                total = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = total;
            }
        }
    }

    cout<<"\nThe New Bubble Sort Array is: \n";
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
