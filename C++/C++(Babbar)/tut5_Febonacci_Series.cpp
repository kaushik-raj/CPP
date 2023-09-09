#include<iostream>
using namespace std;

int main () {
    int k=1;
    cout<<k<<" ";
    int sum=1;
    int j;
    for(int i=1;i<10;i++){

        cout<<k<<" ";
        j=k;
        k=sum+k;

        sum=j;
        
    }
    return 0;
}