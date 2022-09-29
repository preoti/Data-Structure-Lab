#include <iostream>

using namespace std;

int main()
{
   int array [13] ={0,1,2,3,4,5,6,7,8,9,10,11,12};
   int i;
   for (i=0; i<13 ; i++)
   if (i%2==0)
    cout<<i<<" is even \n";
else
    cout<<i<<" is odd \n";

    return 0;
}
