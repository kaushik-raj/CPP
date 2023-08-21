#include<iostream>
using namespace std;
void swap (int *a , int *b){        // storing in a pointer 
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main () {
    int a=45;
    int b=35;
    swap(&a, &b);               // giving the address 
    cout<<a<<" "<<b;
    return 0;
}