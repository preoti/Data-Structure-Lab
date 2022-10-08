#include<iostream>
using namespace std;
int main()
{

    int s,total;
    string arr;

    cout<<"Enter string: "<<endl;
    getline(cin,arr);

    cout<<"Enter Increasing Value: "<<endl;
    cin>>s;

    for(int i=2;i<arr.size();i+=3)
    {
        total=arr[i];
        arr[i]=char(total+s);

    }
    cout<<"Converted Sentence : "<<endl;

    for(int i=0;i<arr.size();i++)
        cout<<arr[i];


}
