#include<iostream>
using namespace std;
int FindUnique(int arr[],int size){
    
    for(int i=0; i<size;i++){
        bool cont =true;    
        int digi=arr[i];
            for(int j=0; j<size ;j++){
                if(digi==arr[j]){
                    cont =false;
                    break;  
                }
            }
        if(cont){
            return digi;
        }
    }
}
int main () {
    int size=7;
    int arr[size]={2,3,1,6,3,6,2};
    int uni = FindUnique(arr , size);
    cout<<uni<<endl;
    return 0;
}