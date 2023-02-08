#include<bits/stdc++.h>
using namespace std;

void selectionSort(int *p, int size);
void printList(int*p,int n);

int main(){
    int n=1000;
    int *a=new int [n];
     ifstream fin("1k.txt");

     for(int i=0;i<n;i++)
     fin>>a[i];
     fin.close();
     selectionSort(a,n);
         cout<<"sorted values are";
         printList (a,n);
         return 0;

}

void selectionSort (int *p ,int size) {
    for (int select=0;select<size; select++)
    {
        int iMin= select;
        for (int i=select; i<size; i++)
        {
            if (p[i]<p[iMin])
                iMin=i;
        }
        swap (p[iMin],p[select]);

    }
}
void printList(int*p,int n){
 for(int i=0;i<n;i++){
            cout<<p[i]<<endl;
    }
}


