#include <iostream>
using namespace std;
int main (){
    int num =0;
    cout<<"Enter a decimal number: ";
    cin>>num;
    int arr[100];
    int ans=0;
    int j=0;
    while(num>0){
        
        ans=num%2;
        arr[j]=ans;
        j++;
        num=num/2;
    }
    cout<<"Binary repersentation: ";
    for(int i=j-1;i>=0;i--){
        cout<<arr[i];
    }
}