#include<bits/stdc++.h>
using namespace std;

void insertionSort(int *p, int size);
void printList(int*p,int n);

int main(){
    int n=1000;
    int *a=new int [n];
     ifstream fin("1k.txt");

     for(int i=0;i<n;i++)
     fin>>a[i];
     fin.close();
     insertionSort(a,n);
         cout<<"sorted values are:\n";
         printList (a,n);
         return 0;

}

void insertionSort (int *a ,int n) {
    for (int j=1;j<=n-1;j++)
    {
        int value= a[j];
        int i=j-1;
        while(i>=0 & a[i]>value)
        {
            swap (a[i],a[i+1]);
            i-=1;
        }
        a[i+1]=value;
    }



}
void printList(int*p,int n){
    ofstream fout ("1k.txt");
 for(int i=0;i<n;i++){
            fout<<p[i]<<endl;
    }
}

