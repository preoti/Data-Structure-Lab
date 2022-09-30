#include <iostream>

using namespace std;



void Oddnumber(int p, int r)
{
    cout<< "\n Odd numbers in the range are: ";
    for (int i = p; i <= r; i++)
    {
        if(i%2 != 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main()
{
    Oddnumber(50,100);
    return 0;
}