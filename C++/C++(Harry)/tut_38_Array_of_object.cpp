#include<iostream>
using namespace std;
class emplyee{
    int id;
    int salary;
    public:
        void setId(){
            salary =122;
            cout<<"Enter the id of emp: "<<endl;
            cin>>id;
        }
        void getid(){
            cout<<"The id of this employee is "<<id<<endl;
        }
};
int main () {
    emplyee fb[4];
    for(int i=0; i<4;i++){
        fb[i].setId();
        fb[i].getid();
    }
    return 0;
}