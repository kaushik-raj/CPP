#include <iostream>
using namespace std;
int main(){
    int a ;
    cout<<"Enter a positive number: ";
    cin>>a;
    int count=0;
    for(int i=0; i<=a;i++){
        count+=i;
    }
    cout<<"Sum = "<<count;
}