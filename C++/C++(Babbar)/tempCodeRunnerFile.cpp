#include<iostream>
using namespace std;

int main () {
    int a = 3 , i =1,j=1,k;
    char ch = 'A';
    while(i<=a){
        k=i;
        j=1;
        while(j<=a){
            char ah = ch+k-1;
            cout<<ah;
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}