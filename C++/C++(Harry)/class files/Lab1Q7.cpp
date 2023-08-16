#include <iostream>
using namespace std;
int funtion(int a, int b ){
    while(b!=0){
        int temp = b;
        b = a%b;
        a=temp;
    }
    return a;
}
int main(){
    int a,b;
    cout<<"Enter two poitive number: "<<endl;
    cin>>a;
    cin>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<< funtion(a,b)<<endl;
    
}