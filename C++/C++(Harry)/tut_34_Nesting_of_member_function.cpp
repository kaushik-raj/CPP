#include<iostream>
#include<string>
using namespace std;
class binary{
    string s;
    public :
        void read(void);
        void chK_bn(void);
        void ones_Compliment(void);
        void display(void);
};
void binary::read(){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}
void binary::chK_bn(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0'&&s.at(i)!='1'){
            cout<<"Incorrect"<<endl;
            exit(0);
        }
    }
};
void binary::ones_Compliment(){
    chK_bn();
    cout<<"just for fun ";
}

int main () {
    binary b;
    b.read();
    b.ones_Compliment();
    return 0;
}