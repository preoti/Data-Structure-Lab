#include<bits/stdc++.h>
using namespace std;

int main() {
    ofstream fout("1k.txt");
    srand(time(0));
    int n=1000;

    for(int i=0;i<n;i++){
        fout<<rand()%1000+1<<endl;
    }


     return 0;
}
