 #include<iostream>
 using namespace std;
 int main()
{
 int arr[5], i, num, index;
 cout<<"Enter 5 Numbers: ";
 for(i=0; i<5; i++)
 cin>>arr[i];
 cout<<"Enter number to Search: ";
 cin>>num;
 for(i=0;i<5; i++)
 {
     if(arr[i]==num)
 {
 index = i;
 }
 }

 cout<<"Found at Index No "<<index;
 cout<<endl;
 return 0;
}
