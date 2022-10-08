#include<iostream>
using namespace std;
int main()
{
    int row, column, i, j, arr[20][20],transpose [20][20];
    cout<<"Enter the size of Row and Column for matrix: ";
    cin>>row>>column;
    cout<<"Enter "<<row*column<<" Array numbers: ";
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
            cin>>arr[i][j];
    }
    cout<<"\nThe matrix is:\n";
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
            cout<<arr[i][j]<<"  ";
        cout<<endl;
    }
    for (int i = 0; i < row; i++)
      for (int j = 0; j < column; j++)
        {
         transpose[j][i] = arr[i][j];
      }

   cout << "\nTranspose of Matrix: " << endl;
   for (int i = 0; i < column; i++)
      for (int j = 0; j < row; j++)
        {
         cout << " " << transpose[i][j];
         if (j == row - 1)
            cout << endl << endl;
      }

   return 0;
}