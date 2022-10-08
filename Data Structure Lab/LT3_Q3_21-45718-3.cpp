#include<iostream>
using namespace std;


struct Employee{

   string id;
   int sal;
   int joiningyear;

};

int main(){

int n=10;

Employee details[n];

for(int i=0;i<n;i++){
    cout<<"EMPLOYEE DETAILS "<<i+1<<endl;
    cout<<"Enter ID: ";
    cin>>details[i].id;
    cout<<"Enter the Salary: "  ;
    cin>>details[i].sal;
    cout<<"Enter the Joining year: ";
    cin>>details[i].joiningyear;

}
 cout<<"All the employees ID whose has joined before 2009"<<endl;
    for(int i=0;i<n;i++){
        if(details[i].joiningyear<2009) {
            cout << "ID : " << details[i].id << endl;
        }else{
            continue;
              }
    }
    cout<<"All the employees ID who has salary more then 20,000"<<endl;
    for(int i =0;i<10;i++)
    {
        if(details[i].sal>20000){
            cout<<"ID : "<<details [i].id<<endl;
        }else{
            continue;
        }
    }
}
