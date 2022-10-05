#include <iostream>
using namespace std;

int main()
{
    int i, j,count ;

    int Arr[10], Rep[10];

    cout<<"Enter 10 numbers: ";
    for(i=0; i<10; i++)
    {
        cin >> Arr[i];
        Rep[i] = 0;
    }

    for(i=0; i<10; i++)
    {
        count = 1;
        for(j=i+1; j<10; j++)
        {
            if(Arr[i] == Arr[j])
            {
                count++;
                Rep[j] = -1;
            }
        }

        if(Rep[i] == 0)
        {
            Rep[i] = count;
        }
    }

    for(i=0; i<10; i++)
    {
        if(Rep[i] != -1)
        {
            cout<< Arr[i] <<" appears = " << Rep[i] << " times"<<endl<<endl;
        }
    }
    return 0;
}
