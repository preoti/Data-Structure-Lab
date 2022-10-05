#include <iostream>
using namespace std;

int main()
{
    int i, count = 0, num;
    int Arr[10] = {4,2,3,4,5,6,7,8,9,9};
    cout<<"Enter a number to search: ";
    cin>>num;


    cout<<"\nThe array is: ";
    for(int i=0; i<10; i++)
    {
        cout << Arr[i] << " ";
    }

    for (int i = 0; i < 10; i++)
    {
        if (Arr[i] == num)
        {
            count++;
        }

    }

    cout << "\nThe number occurs "<< count <<" times in the array" << endl;
    return 0;
}
