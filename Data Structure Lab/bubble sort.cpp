#include<bits/stdc++.h>
using namespace std;

void printList(int *p, int n){
    for(int i=0;i<n;i++){
            cout<<p[i]<<endl;
    }
}
void bubbleSort (int *A, int n){
    for(int i=0;i<=n-2;i++){
            if (A[i]>A[i+1]) swap (A[i],A[i+1]);
    }

}


int main() {

    int n=1000;
    int *a=new int[n];

    ifstream fin("1k.txt");

    for(int i=0;i<n;i++){
        fin>>a[i];
    }

//printList(a,n);
bubbleSort(a,n);
    cout<<"..............."<<endl;

return 0;
}
