#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the price of SmartPhone 1: ";
    cin>>a;
    cout<<"Enter the price of SmartPhone 2: ";
    cin>>b;
    cout<<"Enter the price of SmartPhone 3: ";
    cin>>c;

    if(a<b && a<c){
        cout<<"The best deal in smartPhone is "<<a<<endl;
    }
    else if(b<a && b<c){
        cout<<"The best deal in smartPhone is "<<b<<endl;
    }
    else{
        cout<<"The best deal in smartPhone is "<<c<<endl;
    }
}