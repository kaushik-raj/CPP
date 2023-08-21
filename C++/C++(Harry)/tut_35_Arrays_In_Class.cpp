#include<iostream>
using namespace std;
class shop{
    int itemid[100];
    int itemPrice[100];
    int counting;
    public:
        void intCounter(){
            counting=0;
        }
        void SetPrice();
        void displayPrice();
};
void shop:: SetPrice(){
    cout<<"Enter id of your item no. "<<counting+1<<endl;
    cin>>itemid[counting];
    cout<<"Enter the price of the item ";
    cin>>itemPrice[counting];
    counting++;
};
void shop::displayPrice(){
    for(int i =0 ; i<counting;i++){
        cout<<"The price of item with Id "<<itemid[i]<< " is "<<itemPrice[i]<<endl;
    }
}
int main () {
    shop dukkan ;
    dukkan.intCounter();
    dukkan.SetPrice();
    dukkan.SetPrice();
    dukkan.displayPrice();
    return 0;
}